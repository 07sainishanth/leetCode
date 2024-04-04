class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        product = 1
        zeroFlag = True
        answer = []
        for i in nums:
            if i == 0 and zeroFlag:
                zeroFlag = False
                continue
            product *= i
        for i in nums:
            if i != 0:
                if zeroFlag:
                    answer.append(product/i)
                else:
                    answer.append(0)
            else:
                answer.append(product)
        return answer
            
        