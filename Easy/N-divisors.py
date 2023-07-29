#User function Template for python3
import math

def divisori(n):
    if (n == 1):
        return 1
        
    ans = 2

    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0:
            ans += 1
            if i != n // i:
                ans +=1
    
    return ans

class Solution:
    def count(self, A, B, N): 
        # code here
        ans = 0
        
        for i in range(A, B+1):
            #print(i, divisori(i))
            if divisori(i) == N:
                ans += 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A,B,N = (input().split())
        A = int(A)
        B = int(B)
        N = int(N)
        ob = Solution()
        print(ob.count(A,B,N))
# } Driver Code Ends