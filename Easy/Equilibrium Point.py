# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self, A, N):
        # Your code here
        totdx = 0
        
        for it in A:
            totdx += it
        
        #print(f"Tot: {totdx}")
        
        totsx = 0
        
        for i in range(N):
            el = A[i]
            totdx -= el
            
            #print(el, " ---  ", totdx, totsx)
            
            if totdx == totsx:
                return i +1
            
            totsx += el
        
        return -1



#{ 
 # Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends