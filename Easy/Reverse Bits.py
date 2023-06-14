#User function Template for python3
import math

class Solution:
    def reverseBits(self, n):
        #code here
        bin = []
        
        while n > 0:
            bin += [n % 2]
            n //= 2
        
        ans = 0
        l = len(bin)
        
        j = 0
        for i in range(l-1, -1, -1):
            digit = bin[i] %2
            if (digit == 1):
                ans += math.pow(2, j)
            j += 1
            #print(digit)
        
        return int(ans)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        
        ob=Solution()
        print(ob.reverseBits(n))
     
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends