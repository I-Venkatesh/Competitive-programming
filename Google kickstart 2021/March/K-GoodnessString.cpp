using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    for(int l=1;l<=test;l++)
    {
        int num,k;
        cin>>num>>k;
        string s;
        cin>>s;
        int count=0;
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                count++;
            }
            i++;
            j--;
        }
        cout<<"Case #"<<l<<": "<<abs(k-count)<<"\n";
    }
}