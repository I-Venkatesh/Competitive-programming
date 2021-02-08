class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int arr[nums.size()];
        int arr2[nums.size()];
        arr[0]=nums[0];
        arr2[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]+arr2[i-1])<(nums[i]))
            {
                arr2[i]=(nums[i]+arr2[i-1]);
            }
            else
            {
                arr2[i]=nums[i];
            }
            if((nums[i]+arr[i-1])>(nums[i]))
            {
                arr[i]=(nums[i]+arr[i-1]);
            }
            else{
                arr[i]=(nums[i]);
            }
        }
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            arr2[i]=abs(arr2[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            sum=max(sum,max(arr2[i],arr[i]));
        }
        return sum;
    }
};