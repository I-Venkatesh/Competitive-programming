using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        if(n==1)
        {
            cout<<k<<"\n";
        }
        else if(n>k)
        {
            if(n%k==0)
            {
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
        else if(n==k)
        {
            cout<<1<<"\n";
        }
        else{
            int x=0;
            if(k%n!=0)
            {
                x=1;
            }
            cout<<(k/n)+x<<"\n";
        }
    }
}