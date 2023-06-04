#{ 
 # Driver Code Starts


#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def removeOuter(self, S):
        # Code here
        ans = ""
        par = 0
        
        for c in S:
            
            if c == "(":
                par +=1
                if par != 1:
                    ans += c
                    
            elif c == ")":
                par -= 1
                if par != 0:
                    ans += c
        
        return ans
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        s = input()
        ob = Solution()
        res = ob.removeOuter(s)
        print(res)
# } Driver Code Ends