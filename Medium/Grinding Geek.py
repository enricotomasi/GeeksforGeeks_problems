import math
from typing import List

class Solution:
    def max_courses(self, n : int, total : int, cost : List[int]) -> int:
        # code here
        dp = [0 for i in range(total + 1)]
        
        cost.reverse()
        
        for i in range(len(cost)):
            for j in range(total, cost[i] - 1, -1):
                dp[j] = max(dp[j], dp[j - (cost[i] + 9) // 10] + 1)
        
        return dp[total]
        



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
        
        
        total = int(input())
        
        
        cost=IntArray().Input(n)
        
        obj = Solution()
        res = obj.max_courses(n, total, cost)
        
        print(res)
        

# } Driver Code Ends
