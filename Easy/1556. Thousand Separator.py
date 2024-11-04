class Solution:
    def thousandSeparator(self, n: int) -> str:
        if n == 0:
            return "0"
        
        ans = ""
        count = 0

        while n > 0:
            if count == 3:
                count = 0
                ans = "." + ans
            ans = str(n % 10) + ans
            count += 1

            n //= 10

        return ans
        
