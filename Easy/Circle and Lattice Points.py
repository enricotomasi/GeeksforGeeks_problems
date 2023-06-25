#User function Template for python3
import math;

class Solution:
    def latticePoints(self, r):
        # code here
        if (r <= 0):
            return 0;
        
        ans = 4;
        
        for i in range(1, r):
            y2 = (r*r - i*i);
            y = int(math.sqrt(y2))
            
            if (y*y == y2):
                ans += 4;
            
        return ans;


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        r = int(input())
        ob = Solution()
        print(ob.latticePoints(r))
# } Driver Code Ends