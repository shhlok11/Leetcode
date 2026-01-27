1class Solution {
2public:
3    int romanToInt(string s) {
4        int res = 0;
5        unordered_map<char, int> roman = {
6            {'I', 1},
7            {'V', 5},
8            {'X', 10}, 
9            {'L', 50},
10            {'C', 100},
11            {'D', 500},
12            {'M', 1000}
13        };
14
15        for (int i = 0; i < s.size() - 1; i++) {
16            if (roman[s[i]] < roman[s[i + 1]]) {
17                res -= roman[s[i]];
18            } else {
19                res += roman[s[i]];
20            }
21        }
22
23        return res + roman[s[s.size() - 1]];        
24    }
25};