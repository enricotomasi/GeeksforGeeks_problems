def checkbal(s):
    n = len(s)
    # print(f"\ns: {s} n: {n}")
    
    if n == 0:
        return False
    
    if s[0] == '1':
        return False
    
    z = 0
    o = 0
    
    to = False

    for c in s:
        if c == '1':
            o += 1
            to = True
        else:
            z += 1
            if to:
                return False

    # print(f"zero: {z} one: {o}")
    return z == o

class Solution:
    def findTheLongestBalancedSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0

        for i in range(n):
            for j in range(i, n):
                sub = s[i : j + 1]
                # print(f"\nsub: {sub}")
                if checkbal(sub):
                    ans = max(ans, (j - i + 1))
                    # print(f"bingo!, j - i: {j -i} ans: {ans}")

        # if ans == n:
        #     return n - 1

        return ans
