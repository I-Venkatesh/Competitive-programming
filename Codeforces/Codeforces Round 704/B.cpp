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
        int curr=num;
        int used[100005];
        memset(used,0,sizeof(used));
        stack<int> ans,temp;
        for(int i=num-1;i>=0;i--)
        {
            if(arr[i]!=curr)
            {
                temp.push(arr[i]);
                used[arr[i]]=-1;
            }
            else{
                temp.push(arr[i]);
                used[arr[i]]=-1;
                while(used[curr]!=0)
                {
                    curr--;
                } 
                while(!temp.empty())
                {
                    ans.push(temp.top());
                    temp.pop();
                }
            }
        }
        while(!ans.empty())
        {
            temp.push(ans.top());
            ans.pop();
        }
        while(!temp.empty())
        {
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<"\n";
    }
}