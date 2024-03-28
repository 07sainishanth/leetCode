class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        letterMap = {}
        if len(s) != len(t):
            return False
        for i in s:
            if i in letterMap.keys():
                letterMap[i]+=1
            else:
                letterMap[i] = 1
        for i in t:
            if i not in letterMap.keys() or letterMap[i] == 0:
                return False
            else:
                letterMap[i]-=1
        
        return True