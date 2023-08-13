#User function Template for python3

class Solution:
    def isPossible (self, per, vac, n):
        # your code here
        per.sort()
        vac.sort()
         
        for i in range(n):
            if per[i] > vac[i]:
                return 0
        
        return 1
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    n = int (input ())
    vac = list(map(int, input().split()))
    per = list(map(int, input().split()))
    ob=Solution()
    print (ob.isPossible (per, vac, n))
    
# Contributed By: Pranay Bansal
# } Driver Code Ends