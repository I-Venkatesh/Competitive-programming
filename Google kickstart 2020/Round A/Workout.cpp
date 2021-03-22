using namespace std;
#include<bits/stdc++.h>
#define ll long long int
ll n,k;
ll arr[100005];
ll check(ll x)
{
    ll reqd=0;
    for(ll i=1;i+1<=n;i++)
    {
        ll diff=arr[i+1]-arr[i];
        ll reqd+=(diff-1)/x;
        if(reqd>k)
        {
            return 0;
        }
    }
    return 1;
}
ll bin(ll low,ll hi)
{
    while(low<hi)
    {
        ll mid=(low+hi)/2;
        if(check(mid))
        {
            hi=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    ll test;
    cin>>test;
    for(ll t=1;t<=test;t++)
    {
        cin>>n>>k;
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        ll ans=bin(1,1e9);
        cout<<"Case #"<<t<<": "<<ans<<"\n";
    }
}