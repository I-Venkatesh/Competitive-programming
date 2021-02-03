class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        long long int prefixSum[100009];
        vector<bool> ans(queries.size());
        for(int i=0;i<queries.size();i++)
        {
            ans[i]=false;
        }
        prefixSum[0]=candiesCount[0];
        for(int i=1;i<candiesCount.size();i++)
        {
            prefixSum[i]=prefixSum[i-1]+candiesCount[i];
        }
        for(int i=0;i<queries.size();i++)
        {
            long long int favType=queries[i][0];
            long long int favDay=queries[i][1];
            long long int dailyCap=queries[i][2];
            long long int atleast=(favType==0) ? 0 : prefixSum[favType-1]-(dailyCap-1);
            long long int atMax=prefixSum[favType]-1;
            long long int low=favDay;
            long long int high=dailyCap*favDay;
            if(atMax<low||high<atleast)
            {
                ans[i]=0;
            }
            else{
                ans[i]=1;
            }
        }
        return ans;
        
    }
};