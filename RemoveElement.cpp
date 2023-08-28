class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int arr_index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[arr_index] = nums[i];
                arr_index++;
            }
        }
        return arr_index;
    }
};