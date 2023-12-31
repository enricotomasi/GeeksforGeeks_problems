from typing import List

class Solution:
    def isPossible(self, N : int, coins : List[int]) -> bool:
        # code here
        def rec(coins, i, n, temp):
            #print(i)
            
            if temp != 0 and (temp % 20 == 0 or temp % 24 == 0 or temp == 2024):
                return True
            
            if i >= n:
                return False
            
            #print(coins[i], temp, "\n")
            
            return rec(coins, i + 1, n, temp) or rec(coins, i + 1, n, temp + coins[i])
        
        
        return rec(coins, 0, N, 0)



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
        
        N = int(input())
        
        
        coins=IntArray().Input(N)
        
        obj = Solution()
        res = obj.isPossible(N, coins)
        
        result_val = 1 if res else 0
        print(result_val)

# } Driver Code Ends