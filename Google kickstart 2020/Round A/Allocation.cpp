using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int s=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(s+arr[i]<=k)
            {
                s+=arr[i];
                count++;
            }
        }
        cout<<"Case #"<<t<<": "<<count<<"\n";
    }
}