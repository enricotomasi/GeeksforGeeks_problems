#User function Template for python3

class Solution:
	def FindExitPoint(self, n, m, matrix):
		# Code here
		dir = 0
		dirs = [[0, 1], [1, 0], [0, -1], [-1, 0]]
		
		x = 0
		y = 0
		
		while True:
            if matrix[x][y] == 1:
                dir += 1
                dir %= 4
                matrix[x][y] = 0
                
            #print(f"{x}, {y}: {matrix[x][y]} dir: {dir}")
            
            nx = x + dirs[dir][0]
            ny = y + dirs[dir][1]
            
            if nx < 0 or ny < 0 or nx >= n or ny >= m:
                return [x, y];
            
            x = nx
            y = ny
        
            
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n, m = input().split()
        n = int(n)
        m = int(m)
        matrix = []
        for _ in range(n):
            matrix.append(list(map(int, input().split())))
        ob = Solution()
        ans = ob.FindExitPoint(n, m, matrix)
        for _ in ans:
            print(_, end=" ")
        print()

# } Driver Code Ends
