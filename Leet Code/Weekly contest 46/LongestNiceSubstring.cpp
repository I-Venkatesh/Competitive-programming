class Solution {
public:
    string longestNiceSubstring(string s) {
        vector<string> arr;
        int maxi=0;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            string temp;
            for(int j=i;j<s.size();j++)
            {
                temp+=s[j];
                arr.push_back(temp);
            }
        }
        for(auto i:arr)
        {
            map<char,int> mp;
            string hold=i;
            set<char> charSet;
            for(int j=0;j<hold.size();j++)
            {
                mp[hold[j]]=1;
            }
            bool ok=true;
            for(auto i:mp)
            {
                if(i.first>='a'&&i.first<='z')
                {
                    char ch='A'+i.first-'a';
                    if(mp[ch]==0)
                    {
                        ok=false;
                    }
                }
                else if(i.first>='A'&&i.first<='Z')
                {
                    char ch='a'+i.first-'A';
                    if(mp[ch]==0)
                    {
                        ok=false;
                    }
                }
                
            }
            if(ok)
            {
                if(hold.size()>maxi)
                {
                    ans=hold;
                    maxi=hold.size();
                }
            }
        }
        return ans;
    }
};