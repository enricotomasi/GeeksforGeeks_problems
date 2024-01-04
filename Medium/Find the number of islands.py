#User function Template for python3

import sys
sys.setrecursionlimit(10**8)

class Solution:
    def numIslands(self, grid):
        #code here
        def mark(rows, cols, i, j):
            #print(grid)
            if i < 0 or i >= rows or j < 0 or j >= cols:
                return
    
            if i-1 >= 0 and grid[i-1][j] == 1:
                grid[i-1][j] = 2
                mark(rows, cols, i-1, j)
            
            if i+1 < rows and grid[i+1][j] == 1:
                grid[i+1][j] = 2
                mark(rows, cols, i+1, j)
                
            if j-1 >= 0 and grid[i][j-1] == 1:
                grid[i][j-1] = 2
                mark(rows, cols, i, j-1)
            
            if j+1 < cols and grid[i][j+1] == 1:
                grid[i][j+1] = 2
                mark(rows, cols, i, j+1)
                
            if i-1 >= 0 and j-1 >= 0 and grid[i-1][j-1] == 1:
                grid[i-1][j-1] = 2
                mark(rows, cols, i-1, j-1)
            
            if i+1 < rows and j+1 < cols and grid[i+1][j+1] == 1:
                grid[i+1][j+1] = 2
                mark(rows, cols, i+1, j+1)
            
            if i+1 < rows and j-1 >= 0 and grid[i+1][j-1] == 1:
                grid[i+1][j-1] = 2
                mark(rows, cols, i+1, j-1)
                
            if i-1 >= 0 and j+1 < cols and grid[i-1][j+1] == 1:
                grid[i-1][j+1] = 2
                mark(rows, cols, i-1, j+1)
                
            
        rows = len(grid)
        cols = len(grid[0])
        
        #print(f"rows: {rows}, cols: {cols}")
        
        ans = 0
        
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    #print(i, j)
                    ans += 1
                    grid[i][j] = 2
                    mark(rows, cols, i, j)
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        n,m=map(int,input().strip().split())
        grid=[]
        for i in range(n):
            grid.append([int(i) for i in input().strip().split()])
        obj=Solution()
        print(obj.numIslands(grid))
# } Driver Code Ends
