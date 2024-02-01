from collections import deque 

class Solution:
    #Function to find minimum time required to rot all oranges. 
    def orangesRotting(self, grid):
        #Code here

        x = len(grid)
		y = len(grid[0])
		
		ok = 0
		q = deque()
        
        for i in range(x):
            for j in range(y):
                if grid[i][j] == 1:
                    ok += 1
                elif grid[i][j] == 2:
                    q.append((i, j))
        
        ans = 0
        moves = [(1, 0), (-1, 0), (0, 1), (0, -1)]
       
        while q and ok > 0:
            for i in range(len(q)):
                el = q.popleft()
                
                a = el[0]
                b = el[1]
               
                for it in moves:
                    c = a + it[0]
                    d = b + it[1]
                    
                    if c >= 0 and c < x and d >= 0 and d < y and grid[c][d] == 1:
                        q.append((c, d))
                        grid[c][d] = 2
                        ok -= 1
                        
            ans += 1
        
        if not ok:
            return ans
        
        return -1


#{ 
 # Driver Code Starts
from queue import Queue


T=int(input())
for i in range(T):
	n, m = map(int, input().split())
	grid = []
	for _ in range(n):
		a = list(map(int, input().split()))
		grid.append(a)
	obj = Solution()
	ans = obj.orangesRotting(grid)
	print(ans)

# } Driver Code Ends
