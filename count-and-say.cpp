class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 1 ; i < n ; i++){
            int l = 0, r = 0;
            string t = "";
            while(r < ans.size()){
                char c =ans[l];
                while(r < ans.size() && ans[r] == c) r++;
                char cnt = (r-l)+'0';
                l = r;
                t+= cnt;
                t+= c;
            }
            ans = t;
        }
        return ans;
    }
};
