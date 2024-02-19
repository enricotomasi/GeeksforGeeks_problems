#User function Template for python3

class Solution:
    def longestUniqueSubsttr(self, S):
        # code here
        m = set()
        
        end = 0
        ans = 0
        
        for i in range(len(S)):
            
            while m and S[i] in m:
                m.remove(s[end])
                end += 1
            
            m.add(S[i])
            
            ans = max(ans, i - end + 1)
        
        return ans
  





#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        s = input().strip()
        
        
        ob=Solution()
        print(ob.longestUniqueSubsttr(s))
# } Driver Code Ends
