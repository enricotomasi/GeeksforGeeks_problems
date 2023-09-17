#User function Template for python3
class Solution:
    def findDays (self, S):
        # code here
        ans = 0
        jump = 0
        planks = 0
        
        for c in S:
            if c == ".":
                planks += 1
            else:
                if planks > jump:
                    ans += 1
                    jump = planks
                planks = 0
        
        if planks > jump:
            ans += 1
        
        return ans    


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
       
        X = input()

        ob = Solution()
        print(ob.findDays(X))
# } Driver Code Ends