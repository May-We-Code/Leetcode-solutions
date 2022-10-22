#include<iostream> 
using namespace std;
class Solution {
public:
    string ans;
    string helper(int s,int e,string &str,int &n){
        while(s >= 0 && e < n && str[s] == str[e]){
            s--;
            e++;
        }
        return str.substr(s + 1,e - s - 1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        for(int i = 0;i<n;i++){
            string s1 = helper(i,i,s,n);
            string s2 = helper(i,i + 1,s,n);
            if(s1.size() > ans.size()) ans = s1;
            if(s2.size() > ans.size()) ans = s2;
        }
        return ans;
    }
};
