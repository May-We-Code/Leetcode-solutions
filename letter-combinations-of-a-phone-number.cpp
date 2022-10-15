class Solution {
    unordered_map<char,string> m;
public:
    void temp(vector<string> &ans,string n,string s){
        for(char c:m[n[0]]){
            if(n.size() >= 2)
                temp(ans,n.substr(1),s + c);
            else
                ans.push_back(s + c);
        }
    }
    vector<string> letterCombinations(string digits) {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        vector<string> ans;
        temp(ans,digits,"");
        return ans;
    }
};
