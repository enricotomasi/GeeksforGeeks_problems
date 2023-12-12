#User function Template for python3
class Solution:

	def rowWithMax1s(self, arr, n, m):
		# code here
		def bc(row, start, end):
		    for i in range(start, end):
		        if row[i] == 1:
		            return i
		    return -1
		    
		    
		ones = -1
	    ans = -1
		 
		for i in range(n):
		    #print(arr[i])
		    pos = bc(arr[i], 0, m)
            if pos == -1:
                continue
            
            ot = m - pos
		     
		    if ot > ones:
		        ones = ot
		        ans = i
		         
	    return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        inputLine = list(map(int, input().strip().split()))
        arr = [[0 for j in range(m)] for i in range(n)]
        
        for i in range(n):
            for j in range(m):
                arr[i][j] = inputLine[i * m + j]
        ob = Solution()
        ans = ob.rowWithMax1s(arr, n, m)
        print(ans)
        tc -= 1

# } Driver Code Ends