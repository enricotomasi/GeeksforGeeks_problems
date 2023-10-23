#User function Template for python3
import sys

class Solution:
    def findClosest(self, P, Q, R, A, B, C):
        #code here
        i = 0
        j = 0
        k = 0
        
        ans = sys.maxsize
        
        while i < P and j < Q and k < R:
            a = abs(A[i] - B[j])
            b = abs(B[j] - C[k])
            c = abs(C[k] - A[i])
            
            if max(a, max(b, c)) < ans:
                ans = max(a, max(b, c))
            
            m = min(A[i], min(B[j], C[k]))
            
            if A[i] == m:
                i += 1
            elif B[j] == m:
                j += 1
            else:
                k += 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        P=int(input())
        A=list(map(int,input().strip().split(" ")))
        Q=int(input())
        B=list(map(int,input().strip().split(" ")))
        R=int(input())
        C=list(map(int,input().strip().split(" ")))
        ob=Solution()
        print(ob.findClosest(P,Q,R,A,B,C))
# } Driver Code Ends