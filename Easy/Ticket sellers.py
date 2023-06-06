#User function Template for python3
from queue import PriorityQueue

class Solution:
    def maxAmount(self, N, K, A):
        # code here
        m = 1000000007
        
        q = PriorityQueue()
        
        for i in range(N):
            q.put(-A[i])
        
        ans = 0
        
        while not q.empty():
            if K <= 0:
                break;
            el = q.get() * -1
            ans = ((ans %m) + (el % m)) % m
            q.put((el - 1) * -1)
            K -= 1
            
        
        return ans % m
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, K = [int(x) for x in input().split()]
        A = input().split()
        for itr in range(N):
            A[itr] = int(A[itr])
        
        ob = Solution()
        print(ob.maxAmount(N, K, A))
# } Driver Code Ends