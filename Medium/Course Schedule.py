#User function Template for python3
from collections import deque

class Solution:
    def findOrder(self, n, m, prerequisites):
        # Code here
        g = {}
        arr = [0] * n
        
        for it in prerequisites:
            if it[0] not in g:
                g[it[0]] = []
           
            g[it[0]].append(it[1])
        
        for it in g.values():
            for it2 in it:
                arr[it2] += 1
            
        q = deque()

        for i in range(len(arr)):
            if arr[i] == 0:
                q.append(i)
        
        if len(q) == 0:
            return[]
        
        ans = []
        v = set()
        
        while q:
            temp = q.popleft()
            if temp in v:
                return []
                
            ans.append(temp)
            v.add(temp)
            
            if temp in g:
                for it in g[temp]:
                    arr[it] -= 1
                    
                    if arr[it] == 0:
                        q.append(it)
        
        if len(ans) != n:
            return []
        
        ans = ans[::-1]    
        
        return ans

#{ 
 # Driver Code Starts
# Driver Program

import sys
sys.setrecursionlimit(10**6)
        
def check(graph, N, res):
	map=[0]*N
	for i in range(N):
		map[res[i]]=i
	for i in range(N):
		for v in graph[i]:
			if map[i] > map[v]:
				return False
	return True

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n,m = list(map(int, input().strip().split()))
        adj = [[] for i in range(n)]
        prerequisites = []
        
        for i in range(m):
            u,v=map(int,input().split())
            adj[v].append(u)
            prerequisites.append([u,v])
            
        ob = Solution()
        
        res = ob.findOrder(n, m, prerequisites)
        
        if(not len(res)):
            print("No Ordering Possible")
        else:
            if check(adj, n, res):
                print(1)
            else:
                print(0)
# } Driver Code Ends
