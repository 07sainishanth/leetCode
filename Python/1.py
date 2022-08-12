class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i in range (0, len(nums)):
            
            diff = target - nums[i]
            
            if (diff in hashMap):
                return [hashMap[diff], i]
            hashMap[nums[i]] = i 
        return
            