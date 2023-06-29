#User function Template for python3
import math

m = 1000000007
n = 100000
n1 = n+1
era = [1] * n1


class Solution:
    def primorial (self, N):
        pass
        # code here
        ans = 1
        
        for i in range(2, N+1):
            if (era[i] == 1):
                ans = int(ans * i % m)
        
        return int(ans %m)
        
    def precompute (self):
        pass
        # code here
        
        for i in range(2, int(math.sqrt(n))+1):
            if era[i] == 1:
                for j in range(i*i, n+1, i):
                    era[j] = 0
        
      
                
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3


        

if __name__ == '__main__': 
    ob = Solution()
    ob.precompute()
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ans = ob.primorial(N);
        print(ans)




# } Driver Code Ends