class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # curved = 0; curly = 0; square =0
        mapEle = {'{':'}', '[':']','(':')'}
        stack = []
        for i in s:
            if i == '[' or i =='{' or i == '(':
                stack.append(i)
            elif len(stack) > 0:
                k = stack.pop()
                if mapEle[k] != i:
                   return False
            else:
                return False
        if len(stack) != 0:
            return False
        return True