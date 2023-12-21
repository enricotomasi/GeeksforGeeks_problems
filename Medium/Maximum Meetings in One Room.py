from typing import List


class Solution:
    def maxMeetings(self, N : int, S : List[int], F : List[int]) -> List[int]:
        # code here
        met = []
        
        for i in range(N):
            met.append((S[i], F[i], i))
        
        met = sorted(met, key=lambda tup: tup[1])
        
        #print(met)
        
        ans = []
        last = 0
        
        for it in met:
            #print(it[0], last)
            if it[0] > last:
                ans += [it[2] + 1]
                last = it[1]
        
        ans.sort()
        
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
        
        N = int(input())
        
        
        S=IntArray().Input(N)
        
        
        F=IntArray().Input(N)
        
        obj = Solution()
        res = obj.maxMeetings(N, S, F)
        
        IntArray().Print(res)
        

# } Driver Code Ends