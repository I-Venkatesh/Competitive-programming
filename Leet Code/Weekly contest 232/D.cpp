class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i,j;
        i=j=k;
        int mi=nums[i],ans=nums[i];
        while(i>0||j<nums.size()-1)
        {
            if((i>0?nums[i-1]:0)<(j<nums.size()?nums[j+1]:0))
            {
                mi=min(nums[++j],mi);
            }
             else{
                 mi=min(nums[--i],mi);
            }
             ans=max(ans,mi*(j-i+1));
        }
               return ans;
    }
};