1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k % n;
6        vector<int> rotated(n);
7
8        for (int i = 0; i < n; i++) {
9            rotated[(i + k) % n] = nums[i];
10        }
11
12        for (int i = 0; i < n; i++) {
13            nums[i] = rotated[i];
14        }        
15    }
16};