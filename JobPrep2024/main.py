from _121_Best_Time_to_Buy_and_Sell_Stock import Solution as Solution121
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



execute121()
