from sys import maxsize
from typing import List

class Solution:
    def minimumCost(self, n : int, src : int, dst : int, k : int, m : int, cars : List[List[int]]) -> int:
        # code here
        dist = [maxsize] * n
        dist[src] = 0
        
        for i in range(k+1):
            temp = dist.copy()
            
            for it in cars:
                u = it[0]
                v = it[1]
                w = it[2]
                
                if temp[v] > dist[u] + w:
                     temp [v] = dist[u] + w
            
            dist = temp.copy()
    
        
        #print(dist)
        
        if dist[dst] == maxsize:
            return -1
        
        return dist[dst]
        
        
        




#{ 
 # Driver Code Starts
class IntMatrix:
    def __init__(self) -> None:
        pass
    def Input(self,n,m):
        matrix=[]
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix
    def Print(self,arr):
        for i in arr:
            for j in i:
                print(j,end=" ")
            print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        src = int(input())
        
        
        dst = int(input())
        
        
        k = int(input())
        
        
        m = int(input())
        
        
        cars=IntMatrix().Input(m, m)
        
        obj = Solution()
        res = obj.minimumCost(n, src, dst, k, m, cars)
        
        print(res)
        

# } Driver Code Ends