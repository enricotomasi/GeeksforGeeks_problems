#User function Template for python3
import sys

class Solution:
    def minHours(self, N):
        # code here
        temp = 0
        
        while N > -1:
            if N % 12 == 0 and temp % 10 == 0:
                return N//12 + temp//10;
            
            N -= 10
            temp += 10
        
        return -1
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        print(ob.minHours(N))
# } Driver Code Ends