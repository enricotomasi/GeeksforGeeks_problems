#User function Template for python3
from typing import List

class Solution:
	def findPeakElement(self, a):
		# Code here
		n = len(a)
		
		if (n == 1):
		    return a[0];
		
		if (n == 2):
		    return max(a[0], a[1])
		
		start = 1
        end = n - 2
        
        if a[0] > a[start]:
            return a[0]
            
            if a[n - 1] > a[end]:
                return a[n - 1]
        
        while start <= end:
            mid = (start + end) // 2
            
            if a[mid] > a[mid - 1] and a[mid] > a[mid + 1]:
                return a[mid]
            elif a[mid-1] < a[mid]:
                start = mid + 1
            else:
                end = mid - 1
		
        return a[n-1];


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n = int(input())
        a = list(map(int, input().split()))
        ob = Solution()
        ans = ob.findPeakElement(a)
        print(ans)

# } Driver Code Ends