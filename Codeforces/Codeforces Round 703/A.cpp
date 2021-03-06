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
        long long int sum=0;
        bool ok=true;
        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        long long int reserve=0;
        for(int i=0;i<num;i++)
        {
            reserve+=arr[i];
            if(reserve-i<0)
            {
                ok=false;
            }
            else{
                reserve-=i;
            }

        }
        if(ok)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
}