#User function Template for python3

class Solution:
    def nextPermutation(self, N, arr):
        # code here
        idx = N - 2
        idx2 = N - 1
        
        while idx >= 0 and arr[idx] >= arr[idx + 1]:
            idx -= 1
        
        if idx == -1:
            arr.reverse()
            return arr
        
        while arr[idx2] <= arr[idx]:
            idx2 -= 1
        
        arr[idx], arr[idx2] = arr[idx2], arr[idx]
        
        start = idx + 1
        end = N - 1
        
        while start < end:
            arr[start], arr[end] = arr[end], arr[start]
            
            start += 1
            end -= 1
            
        return arr


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
        ans = ob.nextPermutation(N, arr)
        for i in range(N):
            print(ans[i],end=" ")
        print()
# } Driver Code Ends