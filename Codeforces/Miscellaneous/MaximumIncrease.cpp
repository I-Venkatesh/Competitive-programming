using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    test=1;
    while(test--)
    {
        int num;
        cin>>num;
        int arr[num];
        int sum=0;
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        int len=1,maxi=1;
        for(int i=1;i<num;i++)
        {
            if(arr[i]>arr[i-1])
            {
                len++;
            }
            else{
                maxi=max(maxi,len);
                len=1;
            }
        }
         maxi=max(maxi,len);
        cout<<maxi<<"\n";

    }
}
