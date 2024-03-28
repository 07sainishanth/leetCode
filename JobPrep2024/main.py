from _121_Best_Time_to_Buy_and_Sell_Stock import Solution as Solution121
from _242_Valid_Anagram import Solution as Solution242

# from '217' import Solution as Solution217


def execute121():
    sol = Solution121()
    nums1 = [2,6,4,5,2]
    nums2 = [2,6,4,5,3]
    print(nums1, sol.maxProfit(nums1))
    print(nums2, sol.maxProfit(nums2))

# def execute217():
#     sol = Solution217()
#     nums1 = [2,6,4,5,2]
#     nums2 = [2,6,4,5,3]
#     print(nums1, sol.containsDuplicate(nums1))
#     print(nums2, sol.containsDuplicate(nums2))
    
def execute242():
    sol = Solution242()
    s1 = 'god'; t1 = 'dog'
    s2 = 'tar'; t2 = 'rat'
    s3 = 'sai'; t3 = 'rai'
    s4 = 'Kai'; t4 = 'Heey'
    print(s1,t1, sol.isAnagram(s1,t1))
    print(s2,t2, sol.isAnagram(s2,t2))
    print(s3,t3, sol.isAnagram(s3,t3))
    print(s4,t4, sol.isAnagram(s4,t4))



# execute121()
execute242()
    
