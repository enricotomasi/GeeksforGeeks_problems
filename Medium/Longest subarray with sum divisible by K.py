#User function Template for python3
class Solution:
	def longSubarrWthSumDivByK (self, arr, n, k) : 
		#Complete the function
		ans = 0
		ps = 0
		
		m = {}
		
		for i in range(n):
		    ps += arr[i]
		    carry = ps % k
		    
		    if carry == 0:
		        ans = max(ans, i + 1)
		    
		    if carry < 0:
		        carry += k
		    
		    if carry in m:
		        ans = max(ans, i - m[carry])
		    else:
		        m[carry] = i
		  
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

	for _ in range(0,int(input())):
		n, K = map(int ,input().split())
		arr = list(map(int,input().strip().split()))
		ob = Solution()
		res = ob.longSubarrWthSumDivByK(arr, n, K)
		print(res)




# } Driver Code Ends
