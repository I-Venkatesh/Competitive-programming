using namespace std;
#include<bits/stdc++.h>
int main()
{
    int test;
    cin>>test;
    for(int l=1;l<=test;l++)
    {
        int r,c;
        cin>>r>>c;
        int arr[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        int sumDown[r][c];
        for(int i=0;i<c;i++)
        {
            sumDown[0][i]=arr[0][i];
        }
        for(int i=0;i<c;i++)
        {
            for(int j=1;j<r;j++)
            {
                sumDown[j][i]=arr[j][i] == 1 ? sumDown[j-1][i] + 1 : 0;
            }
        }

        int sumRight[r][c];
        for(int i=0;i<r;i++)
        {
            sumRight[i][0]=arr[i][0];
        }
        for(int i=0;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                sumRight[i][j] = arr[i][j] == 1 ? sumRight[i][j-1] + 1 : 0;
            }
        }

        int sumLeft[r][c];
        for(int i=0;i<r;i++)
        {
            sumLeft[i][c-1]=arr[i][c-1];
        }
        for(int i=0;i<r;i++)
        {
            for(int j=c-2;j>=0;j--)
            {
                sumLeft[i][j] = arr[i][j] == 1 ? sumLeft[i][j+1] + 1 : 0;
            }
        }
        int sumUp[r][c];
        for(int i=0;i<c;i++)
        {
            sumUp[r-1][i]=arr[r-1][i];
        }
        for(int i=0;i<c;i++)
        {
            for(int j=r-2;j>=0;j--)
            {
                sumUp[j][i] = arr[j][i] == 1 ? sumUp[j+1][i] + 1 : 0;
            }
        }
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int up = sumUp[i][j];
                int down= sumDown[i][j];
                int left= sumLeft[i][j];
                int right= sumRight[i][j];
                ans+=max(0,min(up/2,left)-1);
                ans+=max(0,min(up/2,right)-1);

                ans+=max(0,min(down/2,left)-1);
                ans+=max(0,min(down/2,right)-1);

                ans+=max(0,min(left/2,up)-1);
                ans+=max(0,min(left/2,down)-1);

                ans+=max(0,min(right/2,up)-1);
                ans+=max(0,min(right/2,down)-1);
            }
        }
        cout<<"Case #"<<l<<": "<<ans<<"\n";
    }
}