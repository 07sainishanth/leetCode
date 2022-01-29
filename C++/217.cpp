class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> a1;
        for(int i = 0; i < nums.size(); i++){
            a1.insert(nums[i]);
        }
        if(a1.size() < nums.size())
            return true;
        return false;
    }
};