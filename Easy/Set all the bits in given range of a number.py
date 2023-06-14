#User function Template for python3
import math

class Solution:
    def setAllRangeBits(self, N, L, R):
        # code here
        bin = []
        L -= 1
        R -= 1
        
        while N > 0:
            bin += [N % 2]
            N //= 2
        
        #print(bin)
        
        n = len(bin)
        
        ans = 0
        j = 0
        for i in range(n-1, -1, -1):
            if i >= L and i<= R:
               ans += int(math.pow(2, i))
               #print("1 perche nel range ", ans)
            elif bin[i] == 1:
                ans += int(math.pow(2, i))
                #print("1 perche era 1 ", ans)
            #else:
                #print("0", ans)
            
            j += 1
          
        #print()
        return int(ans)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,L,R=map(int,input().split())
        
        ob = Solution()
        print(ob.setAllRangeBits(N,L,R))
# } Driver Code Ends