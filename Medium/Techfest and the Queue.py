import math
from typing import List

class Solution:
    def sumOfPowers(self, a : int, b : int) -> int:
        # code here
        
        arr = [i for i in range(b + 1)]
        
        for i in range(2, int(int(math.sqrt(b))) + 1):
            
            if arr[i] == i:
                for j in range(i * i, b + 1, i):
                    arr[j] = i
        
        ans = 0
        
        for num in range(a, b + 1):
            while num > 1:
                ans += 1
                num //= arr[num]
        
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
        
        a=int(input())
        b=int(input())
        
        obj = Solution()
        res = obj.sumOfPowers(a,b)
        
        print(res)
        

# } Driver Code Ends