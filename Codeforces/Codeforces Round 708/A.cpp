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
        int freq[101];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<num;i++)
        {
            int x;
            cin>>x;
            freq[x]++;
        }
        vector<int> ans;
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                if(freq[j]>0)
                {
                    freq[j]--;
                    ans.push_back(j);
                }
            }
        }
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}