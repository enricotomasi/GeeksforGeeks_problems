#User function Template for python3

class Solution:
    def getCount(self, x, y, n):
        # code here
        m = [False] * (n + 1)  
        
        m[0] = True  
        
        for i in range(min(x, y), n + 1):
            
            if i >= x and m[i - x]:
                m[i] = True
            
            if i >= y and m[i - y]:
                m[i] = True
    
        ans = 0
        
        for i in range(1, n + 1):
            if m[i]:
                ans += 1
    
        return ans
       
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        x,y,n=map(int,input().split())
        
        ob = Solution()
        print(ob.getCount(x,y,n))
# } Driver Code Ends