class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int freq[100005];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<edges.size();i++)
        {
            freq[edges[i][0]]++;
            freq[edges[i][1]]++;
        }
        int maxi=0,num=0;
        for(int i=0;i<100001;i++)
        {
            if(freq[i]>maxi)
            {
                maxi=freq[i];
                num=i;
            }
        }
        return num;
    }
};