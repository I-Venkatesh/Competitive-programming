class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> cut;
        int maxi=0;
        for(int i=0;i<rectangles.size();i++)
        {
            cut.push_back(min(rectangles[i][0],rectangles[i][1]));
            maxi=max(maxi,cut[i]);
        }
        int ans=0;
        for(int i=0;i<cut.size();i++)
        {
            if(cut[i]==maxi)
            {
                ans++;
            }
        }
        return ans;
    }
};