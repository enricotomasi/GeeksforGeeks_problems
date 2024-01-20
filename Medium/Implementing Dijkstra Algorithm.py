import sys
from collections import deque

class Solution:

    #Function to find the shortest distance of all the vertices
    #from the source vertex S.
    def dijkstra(self, V, adj, S):
        #code here
        queue = deque([])
        queue.append([0, S])
        
        inf = sys.maxsize
        
        ans = [inf for i in range(V)]
        ans[S] = 0
        
        n = 0
        
        while len(queue) > 0:
            c = queue.popleft()
            d = c[0]
            n = c[-1]
            
            for i in adj[n]:
                a = i[0]
                w = i[-1]
                
                if d + w < ans[a]:
                    queue.append([d + w, a])
                    ans[a] = d + w
        
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        V,E = map(int,input().strip().split())
        adj = [[] for i in range(V)]
        for i in range(E):
            u,v,w = map(int,input().strip().split())
            adj[u].append([v,w])
            adj[v].append([u,w])
        S=int(input())
        ob = Solution()
        
        res = ob.dijkstra(V,adj,S)
        for i in res:
            print(i,end=" ")
        print()
# } Driver Code Ends