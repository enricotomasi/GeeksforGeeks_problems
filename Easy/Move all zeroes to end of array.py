#User function Template for python3

class Solution:
	def pushZerosToEnd(self, arr, n):
    	# code here
        i = 0
        j = 0
        
        while i < n:
            if arr[i] != 0:
                arr[i], arr[j] = arr[j], arr[i]
                j += 1
            i += 1
        
        return arr
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.pushZerosToEnd(arr, n)
        for x in arr:
            print(x, end=" ")
        print()
        tc -= 1
# } Driver Code Ends
