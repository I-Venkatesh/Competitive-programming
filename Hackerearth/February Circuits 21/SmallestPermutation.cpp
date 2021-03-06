
#include <bits/stdc++.h>

using namespace std;

int main() {
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
		int x=-1;
		for(int i=0;i<num;i++)
		{
			if(arr[i]!=i+1)
			{
				x=i;
				break;
			}
		}
		int mini=arr[x],pos=x;
		for(int i=x;i<num;i++)
		{
			if(arr[i]<mini)
			{
				mini=arr[i];
				pos=i;
			}
		}
		if(x!=-1)
		{
			swap(arr[x],arr[pos]);
		}
		else{
			swap(arr[num-2],arr[num-1]);
		}
		for(int i=0;i<num;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}

