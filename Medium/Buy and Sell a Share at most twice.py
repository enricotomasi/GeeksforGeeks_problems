from typing import List


class Solution:
    def maxProfit(self, n : int, price : List[int]) -> int:
        # code here
        dp = [0] * n
        
        t = price[0]
        
        for i in range(1 ,n):
            t2 = price[i]
            t = min(t, t2)
            
            dp[i] = max(dp[i - 1], t2 - t)
        
        t = price[-1]
        
        ans = max(dp)
        
        for i in range(n - 2, 0, -1):
            t2 = price[i]
            t = max(t, t2)
            
            ans = max(ans, dp[i - 1] + t -t2)
        
        return ans
        



#{ 
 # Driver Code Starts
class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        price=IntArray().Input(n)
        
        obj = Solution()
        res = obj.maxProfit(n, price)
        
        print(res)
        

# } Driver Code Ends
