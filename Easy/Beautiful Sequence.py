#User function Template for python3
import math

class Solution:
	def FindSequenece(self, N):
		# Code here
        ans = []
        r = int(math.sqrt(N))
        
        for i in range(2, r + 1):
            while N % i == 0:
                ans += [N]
                N //= i
                
        if N > 1:
            ans += [N]
        
        ans += [1]
        ans = ans[::-1]
        
        return ans
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        N = int(input())
        ob = Solution()
        ans = ob.FindSequenece(N)
        si = len(ans)
        x = 1
        for i in range(1, si):
            if ans[i] <= ans[i - 1] or ans[i - 1] == 0 or ans[i] % ans[i - 1] != 0:
                x = 0
                break 
        if ans[-1] != N:
            x = 0
        
        print(si,x)
# } Driver Code Ends