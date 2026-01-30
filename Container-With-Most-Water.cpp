1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int maxArea = 0;
5        int left = 0;
6        int right = height.size() - 1;
7
8        while (left < right) {
9            maxArea = max(maxArea, (right - left) * min(height[left], height[right]));
10
11            if (height[left] < height[right]) {
12                left++;
13            } else {
14                right--;
15            }
16        }
17
18        return maxArea;        
19    }
20};