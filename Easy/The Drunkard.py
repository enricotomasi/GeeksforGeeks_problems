#User function Template for python3
class Solution:
	def numOfSteps(self, N, A, B):
		# code here
		if N <= A:
		    return 1
		
		if (N != A and A < B) or (A == B):
		    return -1
		
		pos = 0
		ans = 0
		up = True
		
		while pos < N:
		    ans += 1
		    
		    if up == True:
		        pos += A
		    else:
		        pos -= B
		    
		    up = not up
		    
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N,A,B = input().split()
		N=int(N)
		A=int(A)
		B=int(B)
		ob = Solution();
		print(ob.numOfSteps(N, A, B))

# } Driver Code Ends