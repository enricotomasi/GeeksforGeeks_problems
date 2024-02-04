#User function Template for python3

class Solution:
    def findMaxLen(ob, S):
        # code here 
        n = len(S)
        m = []
        m.append(-1)
        
        ans = 0
        
        for i in range(n):
            if S[i]=='(':
                m.append(i)
            else:
                m.pop()
                if len(m) == 0:
                    m.append(i)
                
                ans = max(ans, i - m[-1])
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        
        ob = Solution()
        print(ob.findMaxLen(S))
# } Driver Code Ends