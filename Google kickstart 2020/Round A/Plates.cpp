using namespace std;
#include<bits/stdc++.h>
int dp[51][51][1600];
int calc(vector<vector<int>> &arr,int k,int i,int j,int p)
{
    if(p<=0)
    {
        return 0;
    }
    if(j>=k||i>=arr.size())
    {
        return 0;
    }
    if(dp[i][j][p]!=-1)
    {
        return dp[i][j][p];
    }
    int x=0,y=0;
    x=max(calc(arr,k,i+1,0,p),max(arr[i][j]+calc(arr,k,i,j+1,p-1),arr[i][j]+calc(arr,k,i+1,0,p-1)));
    return dp[i][j][p]=max(x,y);
}
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        memset(dp,-1,sizeof(dp));
        int n,k,p;
        cin>>n>>k>>p;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }
        int ans=calc(arr,k,0,0,p);
        cout<<"Case #"<<t<<": "<<ans<<"\n";
    }
}