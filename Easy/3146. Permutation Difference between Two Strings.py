class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        m = { }
        
        for i in range(len(t)):
            m[t[i]] = i
        
        ans = 0

        for i in range(len(s)):
            ans += abs(i - m[s[i]])
        
        return ans      
