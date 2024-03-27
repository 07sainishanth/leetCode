class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        uniqueEle = set()
        for i in nums:
            if i in uniqueEle:
                return True
            else:
                uniqueEle.add(i)
        return False
        