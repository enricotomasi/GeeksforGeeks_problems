#User function Template for python3
from collections import deque


class Solution:
    def isTree(self, n, m, edges):
        # Code here
        if m != n - 1:
            return 0

        v = [False] * n
        
        ma = [[] for i in range(n)]

        for it in edges:
            ma[it[0]].append(it[1])
            ma[it[1]].append(it[0])

        queue = deque()
        node = 0

        check = 1
        v[node] = True
        
        queue.append(node)

        while queue:
            curr = queue.popleft()
            for it in ma[curr]:
                if not v[it]:
                    queue.append(it)
                    check += 1
                    v[it] = True

        if check == n:
            return 1
        
        return 0
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range (int(input())):
    n,m = [int(i) for i in input().split()]
    edges = []
    for i in range(m):
        a,b = map(int,input().split())
        edges.append([a,b])

    ob = Solution()
    print(ob.isTree(n,m,edges))
# } Driver Code Ends
