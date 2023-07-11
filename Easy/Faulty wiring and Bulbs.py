#User function Template for python3

class Solution:
    def countFlips(self, a, n):
        #code here
        state = False;
        ans = 0
        
        for i in a:
            el = i
            if state == True:
                if el == 0:
                    el = 1
                else:
                    el = 0
            
            if el == 0:
                state = not state
                ans +=1
                
                
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    ob = Solution()
    print(ob.countFlips(a,n))
# } Driver Code Ends