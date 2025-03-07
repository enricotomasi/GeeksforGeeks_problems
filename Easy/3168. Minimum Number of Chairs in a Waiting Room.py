class Solution:
    def minimumChairs(self, s: str) -> int:
        ans = -1
        temp = 0

        for it in s:
            if it == 'E':
                temp += 1
            else:
                temp -= 1
            
            ans = max(ans, temp)
        
        return ans
