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
        string s;
        cin>>s;
        int prefixZero[num];
        int prefZero=0;
        int c0=0,c1=0;
        for(int i=0;i<num;i++)
        {
            if(s[i]=='0')
            {
                c0++;
                prefZero++;
            }
            else{
                c1++;
            }
            prefixZero[i]=prefZero;
        }
        int prefixOne[num];
        int prefOne=0;
        for(int i=0;i<num;i++)
        {
            if(s[i]=='1')
            {
                prefOne++;
            }
            prefixOne[i]=prefOne;
        }
        int suffixZero[num];
        int suffZero=0;
        for(int i=num-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                suffZero++;
            }
            suffixZero[i]=suffZero;
        }
        int ans=INT_MAX;
        if(num==1)
        {
            ans=1;
        }
        for(int i=0;i<num-1;i++)
        {
            ans=min(ans,prefixOne[i]+suffixZero[i]);
        }
        if(c0==num||c1==num)
        {
            ans=1;
        }
        ans=min(ans-1,min(num-c0,num-c1));
        cout<<ans<<"\n";
    }
}