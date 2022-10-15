class Solution {
public:
    bool isValid(string s) {
        if (s[0] == ')' || s[0] == ']' || s[0] == '}' || s.back() == '(' || s.back() == '[' || s.back() == '{' || s.size() % 2)
    {
        return false;
    }
        stack<char> stk;
        for(char c : s){
            if(c == '(' || c == '{' || c == '[') stk.push(c);
            else if(stk.size() == 0) return false;
            else if(c == ')' && stk.top() == '(') stk.pop();
            else if(c == ']' && stk.top() == '[') stk.pop();
            else if(c == '}' && stk.top() == '{') stk.pop();
            else return false;
        }
        return stk.size() == 0;
    }
};
