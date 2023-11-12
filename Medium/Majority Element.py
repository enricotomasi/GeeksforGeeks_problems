#User function template for Python 3

class Solution:
    def majorityElement(self, a, n):
        #Your code here
        m = dict()
        
        for it in a:
            if it in m:
                m[it] += 1
            else:
                m[it] = 1
        
        #print(m)
        
        for it in m:
            if m[it] > n / 2:
                return it
        
        
        return -1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

from sys import stdin


def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=[int(x) for x in input().strip().split()]
            
            
            obj = Solution()
            print(obj.majorityElement(A,N))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends