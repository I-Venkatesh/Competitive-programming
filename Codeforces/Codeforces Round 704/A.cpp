using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int p,a,b,c,ans=-1;
        cin>>p>>a>>b>>c;
        if(a<p)
        {
            long long int x=p/a;
            if(p%a==0)
            {
                ans=0;
            }
            else{
                a=a*(x+1);
            }
        }
        if(b<p)
        {
            long long int x=p/b;
            if(p%b==0)
            {
                ans=0;
            }
            else{
                b=b*(x+1);
            }
        }
        if(c<p)
        {
            long long int x=p/c;
            if(p%c==0)
            {
                ans=0;
            }
            else{
                c=c*(x+1);
            }
        }
        if(ans==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<min(min(a-p,b-p),c-p)<<"\n";
        }
    }
}