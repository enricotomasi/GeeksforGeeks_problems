 
#User function Template for python3
import math


class Solution:
	def find(self, a, b):
		# Code here
		
		apuntob = a[0] * b[0] + a[1] * b[1] + a[2] * b[2]
		axb = (a[1] * b[2] - a[2] * b[1])  - (a[0] * b[2] - b[0] * a[2]) + (a[0] * b[1] - a[1] * b[0])
		
		assoaxb = abs(math.pow(axb,2))
		
		ans = 0;
		
		apuntob = math.trunc(apuntob)
		assoaxb = math.trunc(assoaxb)

		if apuntob == 0: ans = 2
		if assoaxb == 0: ans = 1
		
		return ans
		
		

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		A = list(map(int, input().split()))
		B = list(map(int,input().split()))
		ob = Solution()
		ans = ob.find(A, B)
		print(ans)
# } Driver Code Ends