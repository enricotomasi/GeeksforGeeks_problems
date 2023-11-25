#User function Template for python3


class Solution:
    
    #Function to detect cycle in a directed graph.

    def dfs(i, s, visited):
        visited.add(i)
        s.add(i)
        
        for it in adj[i]:
            if it not in visited:
                
                if Solution.dfs(it, s, visited):
                    return True
            
            elif it in s:
                return True
        
        s.remove(i)
        
        return False
        

    def isCyclic(self, V, adj):
        # code here
        v = set() 
        
        for i in range(V):
            if i not in v:
                s = set()
        
                if Solution.dfs(i, s, v):
                    return True
        
        return False
        




#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)
        
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        V,E = list(map(int, input().strip().split()))
        adj = [[] for i in range(V)]
        for i in range(E):
            a,b = map(int,input().strip().split())
            adj[a].append(b)
        ob = Solution()
        
        if ob.isCyclic(V, adj):
            print(1)
        else:
            print(0)
# } Driver Code Ends