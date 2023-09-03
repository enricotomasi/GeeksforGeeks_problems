#User function Template for python3
from math import sqrt

class Solution:
	def sumOfProperDivisors(self, arr, N):
		# code here
		ans = []
		
		for it in arr:
		    div = 0
		    if it != 1:
		        div = 1
		    
		    for i in range(2, int(sqrt(it))+1):
		        if it % i == 0:
		            div += i
		            if it / i != i:
		                div += it // i
		    
		    ans += [div]

        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        ob = Solution()
        ans = ob.sumOfProperDivisors(arr,N)
        for i in range(len(ans)):
            print(ans[i], end = " ")
        print()
# } Driver Code Ends