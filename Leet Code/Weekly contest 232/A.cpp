class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        int freq1[30],freq2[30];
        memset(freq1,0,sizeof(freq1));
        memset(freq2,0,sizeof(freq2));
        for(int i=0;i<s1.length();i++)
        {
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
            if(s1[i]!=s2[i])
            {
                c++;
            }   
        }
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        if(c==2||c==0)
        {
            return true;
        }
        return false;
        
    }
};