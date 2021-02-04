class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                freq[(nums[i]*nums[j])]++;
            }
        }
        int ans=0;
         for(auto i:freq)
         {
             if(i.second>1)
             {
                 ans+=((i.second*(i.second-1))/2)*8;
             }
         }
       
        return ans;
    }
};