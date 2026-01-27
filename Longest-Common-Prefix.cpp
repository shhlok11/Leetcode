1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if (strs.empty()) return "";
5
6        string pref = strs[0];
7        int prefLen = pref.length();
8
9        for (int i = 1; i < strs.size(); i++) {
10            string s = strs[i];
11            while (prefLen > s.length() || pref != s.substr(0, prefLen)) {
12                prefLen--;
13                if (prefLen == 0) {
14                    return "";
15                }
16                pref = pref.substr(0, prefLen);
17            }
18        }
19
20        return pref;        
21    }
22};