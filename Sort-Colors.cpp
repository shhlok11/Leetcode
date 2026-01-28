1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int low = 0, mid = 0, high = nums.size() - 1;
5
6        // Process elements until mid pointer crosses high pointer
7        while (mid <= high) {
8            // If current element is 0, swap with low and move both pointers forward
9            if (nums[mid] == 0) {
10                swap(nums[mid], nums[low]);
11                mid++;
12                low++;
13            }
14            // If current element is 1, it's already in correct place → move mid forward
15            else if (nums[mid] == 1) {
16                mid++;
17            }
18            // If current element is 2, swap with high and move only high pointer backward
19            else {
20                swap(nums[mid], nums[high]);
21                high--;
22            }
23        }
24        
25    }
26};