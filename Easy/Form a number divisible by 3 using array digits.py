#User function Template for python3

class Solution:
    def isPossible(self, N, arr):
        # code here
        digitSum = 0
        
        for it in arr:
            while it > 0:
                digitSum += it % 10
                it //= 10
        
        if digitSum % 3 == 0:
            return 1
        
        return 0
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for i in range(N):
            arr[i] = int(arr[i])
        
        ob = Solution()
        print(ob.isPossible(N, arr))
# } Driver Code Ends