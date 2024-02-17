#User function Template for python3

class Solution:
    def shortestDistance(self, N, M, A, X, Y):
        #code here
        if A[0][0] == 0 or A[X][Y] == 0:
            return -1
            
        ans = 0
        q = [[0, 0]]

        while q:
            q2 = []
            
            for it in q:
                
                cx = it[0]
                cy = it[1]
                
                if cx < 0 or cy < 0 or cx >= N or cy >= M or A[cx][cy] == 0:
                    continue
               
                if cx == X and cy == Y:
                    return ans
                
                A[cx][cy] = 0
                q2.extend([[cx + 1, cy], [cx - 1, cy], [cx, cy + 1], [cx, cy - 1]])
                
            q = q2
            ans += 1
        
        return -1
            


#{ 
 # Driver Code Starts

#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N,M=map(int,input().strip().split())
        a=[]
        for i in range(N):
            s=list(map(int,input().strip().split()))
            a.append(s)
        x,y=map(int,input().strip().split())    
        ob=Solution()
        print(ob.shortestDistance(N,M,a,x,y))
        
# } Driver Code Ends