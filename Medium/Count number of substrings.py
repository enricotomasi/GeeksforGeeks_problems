#User function Template for python3

class Solution:
    
        
    def substrCount (self, s, k):
        # your code here
        def rec(s, k):
            n = len(s)
            f = [0] * 26
            
            l = 0 
            r = 0
            d = 0
            
            ans = 0
            
            while r < n:
                f[ord(s[r])-ord("a")] += 1
                
                if f[ord(s[r]) - ord("a")] == 1:
                    d += 1
                
                while d > k:
                    f[ord(s[l]) - ord("a")] -= 1
                    if f[ord(s[l]) - ord("a")] == 0:
                        d -= 1
                    l += 1
                
                ans += r - l + 1
                r += 1
            
            return ans
            
            
        return rec(s,k) - rec(s,k-1)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    k = int (input ())
    ob = Solution()
    print (ob.substrCount (s, k))
# } Driver Code Ends
