#User function Template for python3
import math

class Solution:
    def encryptString(self, S):
        # code here 
        n = len(S)
        
        if n == 2:
            return S[0] + " " + S[1]
        
        uno = math.floor(math.sqrt(n))
        due = math.ceil(math.sqrt(n))
        
        p = 0
        if uno * uno == n:
            p = uno
        else:
            p = due
            
        ans = ""
        for i in range(p):
            for j in range(i, n, p):
                ans += S[j]
            ans += " "
        
        return ans
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        
        ob = Solution()
        print(ob.encryptString(S))
# } Driver Code Ends