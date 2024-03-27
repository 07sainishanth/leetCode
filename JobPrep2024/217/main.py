from solution import Solution

def execution():
    sol = Solution()
    nums1 = [2,6,4,5,2]
    nums2 = [2,6,4,5,3]
    print(nums1, sol.containsDuplicate(nums1))
    print(nums2, sol.containsDuplicate(nums2))


execution()
