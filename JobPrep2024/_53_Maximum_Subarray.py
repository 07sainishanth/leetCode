class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        largest =nums[0]
        sumNums = nums[0]
        for i in range(1, len(nums)):
            if sumNums > 0:
                sumNums += nums[i]
            elif sumNums < nums[i]:
                sumNums = nums[i]
            if sumNums > largest:
                largest = sumNums

        return largest
        