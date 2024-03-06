#User function Template for python3
import heapq
import sys
from typing import List

class Solution:
    def shortestPath(self, n : int, m : int, edges : List[List[int]]) -> List[int]:
        
        g = {i: [] for i in range(n)}
        
        for it in edges:
            a = it[0]
            b = it[1]
            c = it[2]
            
            g[a].append((b, c))
        
        d = [sys.maxsize] * n
        d[0] = 0
        
        q = [(0, 0)]
        
        while q:
            temp = heapq.heappop(q)
            dd = temp[0]
            t = temp[1]
        
            if dd > d[t]:
                continue
        
            for it in g[t]:
                a = it[0]
                w = it[1]
                
                ddd = dd + w
    
                if ddd < d[a]:
                    d[a] = ddd
                    heapq.heappush(q, (ddd, a))
        
        ans = []
        
        for i in range(n):
            if d[i] < sys.maxsize:
                ans.append(d[i])
            else:
                ans.append(-1)
        
        return ans


#{ 
 # Driver Code Starts

#Initial Template for Python 3

from typing import List




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
        
        n,m=map(int,input().split())
        
        
        edges=IntMatrix().Input(m, 3)
        
        obj = Solution()
        res = obj.shortestPath(n, m, edges)
        
        IntArray().Print(res)
# } Driver Code Ends
