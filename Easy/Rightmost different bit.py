#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math




    
# } Driver Code Ends
#User function Template for python3

class Solution:
    
    #Function to find the first position with different bits.
    def posOfRightMostDiffBit(self, m, n):
        #Your code here
        ans = 1
        
        while True:
            if m <= 0 and n <= 0:
                return -1
                
            if m <= 0 or n <= 0:
                return ans
                
            if m % 2 != n %2:
                return ans
                
            ans += 1
            m //= 2
            n //= 2
        
        return -1
        
        
        

#{ 
 # Driver Code Starts.
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        mn=[int(x) for x in input().strip().split()]
        m=mn[0]
        n=mn[1]
        ob=Solution()
        print(math.floor(ob.posOfRightMostDiffBit(m,n)))
        
        
        
        
        T-=1
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends
