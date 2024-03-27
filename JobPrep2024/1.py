class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        twoSumMap = {}
        for i in range(0, len(nums)):
            leftOver = target - nums[i]
            if leftOver in twoSumMap.keys():
                return [twoSumMap[leftOver], i]  
            else:
               twoSumMap[nums[i]] = i

        return []       
