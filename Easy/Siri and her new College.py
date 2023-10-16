#User function Template for python3
class Solution:
	def bunkDays(self, N, M, K):
		# code here
		
		dress = N
		nd = M
		ans = 0
		days = K
		
		while days > 0:
		    days -=1
		    dress -= 1
		    nd -= 1
            
            if dress < 0:
                ans += 1
                dress = 0
            
            if nd == 0:
                dress += 1
                nd = M
            
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N,M,K = input().split()
		N=int(N)
		M=int(M)
		K=int(K)
		ob = Solution();
		print(ob.bunkDays(N,M,K))

# } Driver Code Ends