
#include <iostream>

using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
		int num,k;
		cin>>num>>k;
		string s;
		cin>>s;
		for(int i=0;i<num;i++)
		{
			if(i==num-1&&k>0)
			{
				s[i]='a'+(((s[i]-'a')+k)%26);
				// cout<<s[i];
			}
			else{
				if(s[i]!='a')
				{
					int red='z'-s[i]+1;
					if(red<=k)
					{
						s[i]='a';
						k-=red;
					}
				}
			}
		}
		cout<<s<<"\n";
	}
}


