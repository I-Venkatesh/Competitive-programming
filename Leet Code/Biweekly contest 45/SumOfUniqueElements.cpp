using namespace std;
#include<bits/stdc++.h>
int main()
{
    int num;
    cin>>num;
    int arr[n]
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[1001];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++)
        {
            if(freq[i]==1)
            {
                sum+=i;
            }
        }
        return sum;
    }
};