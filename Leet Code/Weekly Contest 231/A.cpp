class Solution {
public:
    bool checkOnesSegment(string s) {
        int ones=0,cont=0,maxi=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                cont++;
                ones++;
            }
            else{
                maxi=max(cont,maxi);
                cont=0;
                
            }
        }
        maxi=max(cont,maxi);
        if(maxi==ones)
        {
            return true;
        }
        return false;
    }
};