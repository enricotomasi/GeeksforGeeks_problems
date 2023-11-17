#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def counts(s):
        # create an array to store index of last
        last = [-1] * 256
        n = len(s)
         
        dp = [-2] * (n + 1)
        dp[0] = 1
         
        for i in range(1, n + 1):
            dp[i] = 2 * dp[i - 1]
            
            if last[ord(s[i - 1])] != -1:
                dp[i] = dp[i] - dp[last[ord(s[i - 1])]]
            
            last[ord(s[i - 1])] = i - 1
     
        return dp[n]
    
    
    def betterString(self, str1, str2):
        # Code here
        diff1 = Solution.counts(str1)
        diff2 = Solution.counts(str2)
        
        if diff1 >= diff2:
            return str1
        
        return str2
        
        
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str1 = input()
        str2 = input()
        ob = Solution()
        res = ob.betterString(str1, str2)
        print(res)
# } Driver Code Ends
