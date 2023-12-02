#User function Template for python3

class Solution:
    def longestPalin(self, S):
        # code here
        def pal(s):
            r = s[::-1]
            if r == s:
                return True
            return False
        
        n = len(S)
        ans = ""
        
        for i in range(n):
            for j in range(n-1, -1, -1):
                p = S[i:j+1]
                
                if len(p) > len(ans) and pal(p):
                    ans = p
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()

        ob = Solution()

        ans = ob.longestPalin(S)

        print(ans)
# } Driver Code Ends