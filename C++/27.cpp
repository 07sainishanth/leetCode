class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>final_arr;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val)
                final_arr.push_back(nums[i]);
        }
        for(int i = 0; i < final_arr.size(); i++){
            nums[i] = final_arr[i];
        }
        return final_arr.size();
    }
};