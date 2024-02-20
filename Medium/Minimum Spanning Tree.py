#User function Template for python3
import heapq

class Solution:
    
    #Function to find sum of weights of edges of the Minimum Spanning Tree.
    def spanningTree(self, V, adj):
        #code here
        ans = 0
        visited = [0] * V
        
        h = []
        heapq.heappush(h, (0, 0))
        
        while h:
            value = heapq.heappop(h)
            wt = value[0]
            node = value[1]
            if visited[node] == 1:
                continue
            
            visited[node] = 1
            ans += wt
            
            for it in adj[node]:
                a = it[0]
                b = it[1]
            
                if visited[a] != 1:
                    heapq.heappush(h, (b, a))
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

# Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        V,E = map(int,input().strip().split())
        adj = [[] for i in range(V)]
        for i in range(E):
            u,v,w = map(int,input().strip().split())
            adj[u].append([v,w])
            adj[v].append([u,w])
        ob = Solution()
        
        print(ob.spanningTree(V,adj))
# } Driver Code Ends
