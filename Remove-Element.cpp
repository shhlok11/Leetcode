1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        if(nums.empty()) return 0;
5        int i = 0;
6
7        for(int j = 0; j < nums.size(); j++) {
8            if(nums[j] != val) {
9                nums[i] = nums[j];
10                i++;
11            }
12        }
13        return i;
14    }
15};