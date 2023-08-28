class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ns = nums.size();
        for (int a = 0; a < ns - 1; a++) {
            for (int b = a + 1; b < ns; b++) {
                if (nums[a] + nums[b] == target) {
                    return {a, b};
                }
            }
        }
        return {}; 
    }
};