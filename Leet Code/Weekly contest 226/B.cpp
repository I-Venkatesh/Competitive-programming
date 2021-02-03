class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>> umap;
        unordered_map<int,int> freq;
        for(int i=0;i<adjacentPairs.size();i++)
        {
            freq[adjacentPairs[i][0]]++;
            freq[adjacentPairs[i][1]]++;
            umap[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            umap[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int start;
        for(auto i:freq)
        {
            if(i.second==1)
            {
                start=i.first;
                break;
            }
        }
        vector<int> ans;
        stack<int> st;
        st.push(start);
        unordered_map<int,int> visited;
        while(!st.empty())
        {
            int hold=st.top();
            visited[hold]=1;
            ans.push_back(hold);
            st.pop();
            for(int i=0;i<umap[hold].size();i++)
            {
                if(visited[umap[hold][i]]==0)
                {
                    st.push(umap[hold][i]);
                }
            }
        }
        return ans;
        
    }
};