#User function Template for python3
class Solution:
	def numberOfPermWithKInversion(self, N, K):
		# code here
		m = 1000000007
		
		esterno = [ 0 ] * (K + 1)
		
		for i in range(N + 1):
		    interno = [ 0 ] * (K + 1)
		    interno[0] = 1
		    
		    for j in range(1, K + 1):
		        aggiungi = 0
		        if j - i >= 0:
		            aggiungi = esterno[j - i]
		        
		        agg2 = ((esterno[j] + m - aggiungi)) % m
		        
		        interno[j] = (interno[j - 1] + agg2) % m
		    
		    esterno = interno
		
        aggiungi = 0
        if k > 0:
            aggiungi = esterno[k - 1]
        
        return (esterno[k] + m - aggiungi) % m 

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n,k = input().split()
		n,k = int(n), int(k)
		ob = Solution()
		ans = ob.numberOfPermWithKInversion(n,k)
		print(ans)

# } Driver Code Ends