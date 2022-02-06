class Solution {
//     hashMap = {}
//         for i in range (0, len(nums)):
            
//             diff = target - nums[i]
            
//             if (diff in hashMap):
//                 return [hashMap[diff], i]
//             hashMap[nums[i]] = i 
//         return
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(hashMap.find(diff) != hashMap.end())
                return {hashMap[diff], i};
            hashMap[nums[i]] = i;
        }
        return {};
    }
};