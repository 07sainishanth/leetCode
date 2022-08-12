class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = float('inf')
        profit = 0
        for i in prices:
            if i < low:
                low = i
            if profit < (i - low):
                profit = i - low
        return profit
                
        