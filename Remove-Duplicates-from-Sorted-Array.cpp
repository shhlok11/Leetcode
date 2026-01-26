1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.empty()) return 0;
5
6        int i = 0;
7
8        for(int j = 1; j < nums.size(); j++) {
9            if(nums[i] != nums[j]){
10                i++;
11                nums[i] = nums[j];
12            }
13            
14        }
15        return i + 1;
16    }
17    
18};