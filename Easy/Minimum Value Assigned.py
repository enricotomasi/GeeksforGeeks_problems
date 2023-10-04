#User function Template for python3

class Solution:
    def minValue(self, N, arr):
        # code here
        l = [0] * N
        r = [0] * N
        
        l[0] = 1
        
        for i in range(1, N):
            if arr[i] > arr[i-1]:
                l[i] = l[i - 1] + 1
            else:
                l[i] = 1
        
        r[N - 1] = 1
        
        for i in range(N - 2, -1, -1):
            if arr[i] > arr[i + 1]:
                r[i] = r[i + 1] + 1
            else:
                r[i] = 1
                
        ans = 0
        
        for i in range(N):
            ans += max(l[i], r[i])
        
        return ans


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
        print(ob.minValue(N, arr))
# } Driver Code Ends