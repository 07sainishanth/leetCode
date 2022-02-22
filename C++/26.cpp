class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>unique;
        if(nums.size() == 0)
            return 0;
        int prev = nums[0];
        unique.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != prev){
                prev = nums[i];
                unique.push_back(prev);
            }
        }
        for(int i = 1; i < unique.size(); i++){
            nums[i] = unique[i];
        }
        return unique.size();
    }
};