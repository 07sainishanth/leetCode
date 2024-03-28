class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minVal = prices[0]
        profit = 0
        for i in range(1, len(prices)):
            if profit < (prices[i]-minVal):
                profit = prices[i]-minVal
            elif prices[i] < minVal:
                minVal = prices[i]
        return profit
        