#User function Template for python3
import math

class Solution:
    def ShortestPath(self, S):
        #code here
        n = len(S)
        
        ans = []
        
        ax = 0
        ay = 0
    
        for i in range(n):
            pos = ord(S[i]) - ord('A')
            
            nx, ny = divmod(pos, 5)
            
            right = ny - ay
            down = nx - ax
    
            while right > 0:
                ans += ["RIGHT"]
                right -= 1
    
            while right < 0:
                ans += ["LEFT"]
                right += 1
    
            while down > 0:
                ans += ["DOWN"]
                down -= 1
    
            while down < 0:
                ans += ["UP"]
                down += 1
    
            ans += ["OK"]
            
            ax, ay = nx, ny
    
        return ans




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        S=input()
        ob=Solution()
        ans=ob.ShortestPath(S)
        for i in ans:
            print(i,end=" ")
        print()
# } Driver Code Ends