#User function Template for python3
class Solution:
	def makeNumberOdd(self, N):
		# code here
		if (N % 2 != 0):
		    return 1
		    
		ans = 2
		
		while True:
		    if (N // ans) != (N /ans):
		        ans +=1
		        continue
		    
		    if (N // ans) %2 != 0:
		        return ans
		        
		    ans += 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.makeNumberOdd(N)
		print(ans)

# } Driver Code Ends