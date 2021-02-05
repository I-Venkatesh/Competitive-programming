class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string t1="ab";
        if(y>x)
        {
            t1="ba";
            swap(x,y);
        }
        int i=0,res=0;
        stack<char> A,B;
        while(i<s.size())
        {
            if(A.empty())
            {
                A.push(s[i]);
                i++;
                continue;
            }
            if(s[i]==t1[1]&&A.top()==t1[0]){
                A.pop();
                res+=x;
            }
            else{
                A.push(s[i]);
            }
            ++i;
        }
        while(!A.empty())
        {
            if(B.empty())
            {
                B.push(A.top());
                A.pop();
                continue;
            }
            if(B.top()==t1[0]&&A.top()==t1[1])
            {
                B.pop();
                res+=y;
            }
            else{
                B.push(A.top());
            }
            A.pop();
        }
        return res;
    }
};