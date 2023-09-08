#User function Template for python3
import math

class Solution:
    def nearestPower(self, N , M):
        # code here
        if N == M:
            return 1
       
        l = math.log(N) // math.log(M)
        uno = abs(N - (M ** l))
        due = abs(N - (M ** (l + 1)))
        
        if(uno == due):
            return int(M ** (l + 1))
        
        elif(uno > due):
            return int(M ** (l + 1))
        
        
        return int(M ** l)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,M=map(int,input().split())
        
        ob = Solution()
        print(ob.nearestPower(N,M))
# } Driver Code Ends