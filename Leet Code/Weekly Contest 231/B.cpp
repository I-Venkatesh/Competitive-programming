class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        return ceil(abs(sum-goal)/(1.0*limit));
    }
};