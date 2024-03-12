#User function Template for python3
from collections import deque

class Solution:
    def numProvinces(self, adj, V):
        # code here 
        v = set()
        ans = 0
        
        g = {i : [] for i in range(V) }
        
        n = len(adj)
        
        for i in range(n):
            for j in range(n):
                if adj[i][j] == 1 and i != j:
                    g[i].append(j)
        
        for i in range(V):
            if i not in v:
                ans += 1
                v.add(i)
                q = deque() 
                
                for j in g[i]:
                    q.append(j) 
                
                while q:
                    t = q.popleft()
                    if t not in v: 
                        v.add(t)
                        
                        for j in g[t]: 
                            if j not in v: 
                                q.append(j)
                                
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        V=int(input())
        adj=[]
        
        for i in range(V):
            temp = list(map(int,input().split()))
            adj.append(temp);
        
        ob = Solution()
        print(ob.numProvinces(adj,V))
# } Driver Code Ends
