 
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main() {
	int test;
	cin>>test;
	while(test--)
	{
		ll num;
		cin>>num;
		ll arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		ll Max_prefixSum_So_far[num];
		ll Max_suffixSum_So_far[num];
		Max_prefixSum_So_far[0]=arr[0];
		ll curr=arr[0];
		for(int i=1;i<num;i++)
		{
			curr=max(arr[i],curr+arr[i]);
			Max_prefixSum_So_far[i]=max(Max_prefixSum_So_far[i-1],curr);
		}
		Max_suffixSum_So_far[num-1]=arr[num-1];
		curr=arr[num-1];
		for(int i=num-2;i>=0;i--)
		{
			curr=max(arr[i],curr+arr[i]);
			Max_suffixSum_So_far[i]=max(Max_suffixSum_So_far[i+1],curr);
		}
		ll ans=0;
		for(int i=0;i<num-1;i++)
		{
			ans=max(ans,Max_prefixSum_So_far[i]+Max_suffixSum_So_far[i+1]);
		}
		ans=max(Max_prefixSum_So_far[num-1],ans);
		ans=max(Max_suffixSum_So_far[0],ans);
		cout<<ans<<"\n";
	}	
}

