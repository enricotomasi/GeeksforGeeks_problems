class Solution:
	def floodFill(self, image, sr, sc, newColor):
		#Code here
		col = image[sr][sc]
		
		if col == newColor:
		    return image

	    n = len(image)
	    m = len(image[0])
		    
		def rec(x, y):
		    if x < 0 or x >= n or y < 0 or y >= m or image[x][y] != col:
		        return 
		    
		    image[x][y] = newColor
		    rec(x, y + 1)
		    rec(x + 1, y)
		    rec(x - 1, y)
		    rec(x, y - 1)
		    
		        
		rec(sr, sc)
		
		return image



#{ 
 # Driver Code Starts
import sys
sys.setrecursionlimit(10**7)


T=int(input())
for i in range(T):
	n, m = input().split()
	n = int(n)
	m = int(m)
	image = []
	for _ in range(n):
		image.append(list(map(int, input().split())))
	sr, sc, newColor = input().split()
	sr = int(sr); sc = int(sc); newColor = int(newColor);
	obj = Solution()
	ans = obj.floodFill(image, sr, sc, newColor)
	for _ in ans:
		for __ in _:
			print(__, end = " ")
		print()
# } Driver Code Ends
