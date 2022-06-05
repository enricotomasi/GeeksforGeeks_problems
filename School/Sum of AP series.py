 
#User function Template for python3
import math

class Solution:
	def sum_of_ap(self, n, a, d):
		# Code here
        ans = a
        for i in range (1,n):
            ans += (d*i)+a

        return ans;

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n, a, d = input().split()
		n = int(n)
		a = int(a)
		d = int(d)
		ob = Solution();
		ans = ob.sum_of_ap(n, a, d)
		print(ans)
# } Driver Code Ends