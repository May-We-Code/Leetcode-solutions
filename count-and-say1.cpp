class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        if(n==1)
            return s;
        for(int i=2;i<=n;i++)
        {
            string t="";
            int count=1;
            for(int i=1;i<s.length();i++)
            {
                if(s[i]!=s[i-1])
                {
                    t+=to_string(count)+s[i-1];
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            t+=to_string(count);
            t+=s[s.length()-1];
            s=t;
        }
        return s;
        
        }
};