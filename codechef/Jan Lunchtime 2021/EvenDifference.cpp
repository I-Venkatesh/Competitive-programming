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
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<num;i++)
        {
            if(arr[i]%2!=0)
            {
                count++;
            }
        }
        cout<<min(count,num-count)<<"\n";
    }
}