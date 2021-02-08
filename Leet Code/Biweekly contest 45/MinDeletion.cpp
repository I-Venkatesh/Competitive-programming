class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(s[i]==s[j]&&i<j)
        {
            if(i==j)
            {
                return 1;
            }
            while(s[i+1]==s[i]&&i<j)
            {
                i++;
            }
            while(s[j-1]==s[j]&&i<j)
            {
                j--;
            }
            
            i++;
            j--;
        }
        if(i>j)
        {
            return 0;
        }
        else if(i==j)
        {
            return 1;
        }
        else
        {
            return j-i+1;
        }
    }
};