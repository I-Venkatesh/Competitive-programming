using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        int arr[num];
        int sum=0;
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<"\n";
        }
        else{
            sum/=2;
            int dp[num+1][sum+1];
            for(int i=0;i<=sum;i++)
            {
                dp[0][i]=0;
            }
            for(int i=0;i<=num;i++)
            {
                dp[i][0]=1;
            }
            for(int i=1;i<=num;i++)
            {
                for(int j=1;j<=sum;j++)
                {
                    if(j-arr[i-1]>=0){
                        dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                    }
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            if(dp[num][sum]==1)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
    }
}