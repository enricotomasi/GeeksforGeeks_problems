#User function Template for python3

class Solution:
	def find(self, n):
		# Code here
		i = 1
		somma = 0
		
		while True:
		    somma += i
		    
		    if somma > n:
		        return -1
		    elif somma == n:
		        return i
		    
		    i +=1
		


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution()
		ans = ob.find(n)
		print(ans)
# } Driver Code Ends