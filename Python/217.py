class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        setNums = set(())
        for i in nums:
            setNums.add(i)
        if len(setNums) < len(nums):
            return True
        return False