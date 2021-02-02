using namespace std;
#include<bits/stdc++.h>
long long int denom[5]={1,5,10,20,100};
map<long long int,long long int> dp;
long long int solve(int num)
{
    int ans=0;
    for(int i=4;i>=0;i--)
    {
        if(num>=denom[i])
        {
            ans+=num/denom[i];
            num-=(num/denom[i])*denom[i];
        }
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout<<solve(num);
}