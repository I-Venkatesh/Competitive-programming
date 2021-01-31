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
        long long int sum=0;
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0)
        {
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
}