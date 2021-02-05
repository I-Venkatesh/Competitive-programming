class Solution {
public:
    int totalMoney(int n) {
        int sum=1;
        int arr[7]={1,2,3,4,5,6,7};
        for(int i=1;i<n;i++)
        {
            if(i%7==0)
            {
                for(int j=0;j<7;j++)
                {
                    arr[j]++;
                }
                sum+=arr[i%7];
            }
            else{
                sum+=arr[i%7];
            }
        }
        return sum;
    }
};