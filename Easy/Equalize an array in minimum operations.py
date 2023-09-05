#User function Template for python3

class Solution:
    def equalizeArray(self, N, k, A):
        # code here
        if N == 1:
            return 0
        
        m = 1000000007
        
        ans = 0
        
        A.sort()
        
        mediana = 0
        if N % 2 == 1:
            mediana = N // 2
        else:
            mediana = (N // 2) - 1
        
        for i in range(N):
            if abs(A[mediana] - A[i]) % k != 0:
                return -1
            else:
                s = abs(A[mediana] - A[i])
                ans += (s // k) % m
        
        return ans % m
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, k = [int(x) for x in input().split()]
        A = input().split()
        for i in range(N):
            A[i] = int(A[i])
        
        ob = Solution()
        print(ob.equalizeArray(N, k, A))
# } Driver Code Ends