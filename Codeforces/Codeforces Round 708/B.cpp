using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num,m;
        cin>>num>>m;
        map<int,int> cnt;
        for(int i=0;i<num;i++)
        {
           int x;
           cin>>x;
           cnt[x%m]++;
        }
        int ans=0;
        for(auto &c:cnt)
        {
            if(c.first==0)
            {
                ans++;
            }
            else if(2*c.first==m)
            {
                ans++;
            }
            else if(2*c.first<m||cnt.find(m-c.first)==cnt.end())
            {
                int x=c.second;
                int y=cnt[m-c.first];
                ans+=1+max(0,abs(x-y)-1);
            }
        }
        cout<<ans<<"\n";
    }
}