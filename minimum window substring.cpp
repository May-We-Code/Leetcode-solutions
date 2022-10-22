class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++)
        {
            mp[t[i]]++;
        }
       unordered_map<char,int> w;
        int l=0;
        int h=0;
        int id1=-1, id2=-1;
        int res=INT_MAX;
        while(h<n)
        {
            w[s[h]]++;
            bool flag=true;
            for(auto it:mp)
            {
                if(it.second>w[it.first])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
            {
                h++;
                continue;
            }
            
            while(l<=h && w[s[l]]-1>=mp[s[l]])
            {
                w[s[l]]--;
                l++;
            }
            if(l>h)
                continue;
            if(res>h-l+2)
            {
                id1=l;
                id2=h;
                res=h-l+2;
            }
            h++;
        }
        if(id1==-1 && id2==-1)
            return "";
        return s.substr(id1,id2-id1+1);
        
    }
};