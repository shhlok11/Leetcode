1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> hashMap;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int complement = target - nums[i];
8
9            if (hashMap.find(complement) != hashMap.end()) {
10                return {hashMap[complement], i};
11            }
12
13            // store current number AFTER checking
14            hashMap[nums[i]] = i;
15        }
16
17        return {-1, -1}; // no pair found
18    }
19};
20