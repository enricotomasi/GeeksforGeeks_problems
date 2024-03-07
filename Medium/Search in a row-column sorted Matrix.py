
#User function Template for python3

class Solution:
    
    #Function to search a given number in row-column sorted matrix.
    def search(self, matrix, n, m, x): 
    	# code here
    	def binsearch(arr, start, end, pivot, x):
    	    if start > end or pivot < 0:
    	        #print(f"Index: {pivot} exit :(")
    	        return False
    	    
    	    el = arr[pivot]
    	    if el == x:
    	        #print(f"Index: {pivot} Bingo!")
    	        return True
    	    
    	    if el > x:
	            newend = pivot - 1
	            newpivot = start + ((newend - start) // 2)

	            ##print(f"Index: {pivot}, el: {el} > x {x}, start: {start}, end: {newend}, pivot: {newpivot}")
	            return binsearch(arr, start, newend, newpivot, x)
    	    else:
	            newstart = pivot + 1
	            newpivot = newstart + ((end - newstart) // 2)
	            
	            #print(f"Index: {pivot}, el: {el} < x {x}, start: {newstart}, end: {end}, pivot: {newpivot}")
	            return binsearch(arr, newstart, end, newpivot, x)
	        
    	#print(f"x: {x}")    
    	
    	cols = []
    	
    	for i in range(n):
    	    #print(f"Start: {matrix[i][0]}, end: {matrix[i][m - 1]}")
    	    
    	    if matrix[i][0] == x or matrix[i][m - 1] == x:
    	        return 1
    	    
    	    if x > matrix[i][0] and x < matrix[i][m - 1]:
    	        cols.append(i)
    	
    	#print(f"Cols: {cols}")
    	
    	for it in cols:
    	    #print(f"BinSearch: {matrix[it]}")
    	    
    	    if binsearch(matrix[it], 0, m - 1, ((m - 1) // 2), x):
    	        return 1
    	
    	return 0



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		size = input().strip().split()
		r = int(size[0])
		c = int(size[1])
		line = input().strip().split()
		matrix = [ [0 for _ in range(c)] for _ in range(r) ]
		for i in range(r):
			for j in range(c):
				matrix[i][j] = int( line[i*c+j] )
		target = int(input())
		obj = Solution()
		if (obj.search(matrix,r,c,target)): 
			print(1) 
		else: 
			print(0) 


# } Driver Code Ends
