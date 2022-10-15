class Solution {
public:
    int romanToInt(string s) {
         int ans = 0;
    char last = 'Z';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'I')
        {
            if (last == 'V' || last == 'X')
            {
                ans -= 1;
            }
            else
            {
                ans += 1;
            }
        }
        else if (s[i] == 'V')
        {
            ans += 5;
        }
        else if (s[i] == 'X')
        {
            if (last == 'L' || last == 'C')
            {
                ans -= 10;
            }
            else
            {
                ans += 10;
            }
        }
        else if (s[i] == 'L')
        {
            ans += 50;
        }
        else if (s[i] == 'C')
        {
            if (last == 'D' || last == 'M')
            {
                ans -= 100;
            }
            else
            {
                ans += 100;
            }
        }
        else if (s[i] == 'D')
        {
            ans += 500;
        }
        else if (s[i] == 'M')
        {
            ans += 1000;
        }
        last = s[i];
    }
    return ans;   
    }
};
