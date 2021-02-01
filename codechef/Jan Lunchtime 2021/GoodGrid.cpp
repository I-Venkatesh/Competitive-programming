using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num,k;
        cin>>num>>k;
        bool ok=false;
        for(int i=1;i*i<=k;i++)
        {
            if(k%i==0)
            {
                int x=i;
                int y=k/i;
                if(max(x,y)<=num)
                {
                    ok=true;
                }
            }
        }
        if(ok)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}