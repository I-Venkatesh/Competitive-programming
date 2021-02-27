class Solution {
public:
    int countHomogenous(string s) {
        int i=0,cnt=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(i>0&&s[i]==s[i-1])
            {
                cnt++;
            }
            else{
                cnt=1;
            }
            ans=(ans+cnt)%1000000007;
        }
        return ans;
    }
};