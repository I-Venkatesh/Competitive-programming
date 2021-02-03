class Solution {
public:
    int count(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) 
    {
        int freq[1000];
        memset(freq,0,sizeof(freq));
        for(int i=lowLimit;i<=highLimit;i++)
        {
            freq[count(i)]++;
        }
        int maxi=-10000;
        for(int i=0;i<99;i++)
        {
            maxi=max(maxi,freq[i]);
        }
        return maxi;
    }
};
