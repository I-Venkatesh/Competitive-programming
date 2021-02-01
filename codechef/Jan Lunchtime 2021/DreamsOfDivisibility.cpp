using namespace std;
#include<bits/stdc++.h>
# define int long long
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int res=power(a,b/2);
    if(b%2!=0)
    {
        return res*res*a;
    }
    else{
        return res*res;
    }
}
int32_t main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num,k;
        cin>>num>>k;
        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<34;j++)
            {
                int x=arr[i]*power(2,j);
                if(x%k==0)
                {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==num)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}



