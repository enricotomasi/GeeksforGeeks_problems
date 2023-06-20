#User function Template for python3

class Solution:
    def stringSort (self, s):
        # your code here
        up = [];
        low = [];
        
        for c in s:
            if (c >= 'a' and c <= 'z'):
                up += [c];
            else:
                low += [c];

        up.sort();
        low.sort();
        
        lu = len(up);
        ll = len(low);
        
        lim = max(lu, ll);
        
        ans = ""
        
        for i in range(lim):
            if (i < ll):
                ans += low[i];
            if (i < lu):
                ans += up[i]; 
        
        return ans;
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    ob = Solution()
    print (ob.stringSort (s))
    
#  Contributes By: Pranay Bansal
# } Driver Code Ends