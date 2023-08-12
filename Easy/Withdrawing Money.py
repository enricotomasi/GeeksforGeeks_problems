#User function Template for python3
import math

class Solution:
    def numberOfDays(self, N):
        # code here 
        ans = 0

        while N > 1:
            if N % 2 == 0:
                ans += 1
                N /= 2
            else:
                div = 1
                for i in range(3, int(math.sqrt(N) + 1), 2):
                    if N %i == 0:
                        if i > div:
                            div = i
                        if N/i > div:
                            div = N / i
                            break
            
                ans += 1
                N -= div
            
        #print(ans)
        if N == 1:
            ans += 1
            
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        ob = Solution()
        print(ob.numberOfDays(N))
# } Driver Code Ends