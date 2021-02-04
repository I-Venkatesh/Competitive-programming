class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0,maxi=0;
        for(auto i:gain)
        {
            curr+=i;
            maxi=max(maxi,curr);
        }
        return maxi;
    }
};