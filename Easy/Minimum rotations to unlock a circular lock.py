#User function Template for python3

class Solution:
    def rotationCount(self, R, D):
        # code here
        ans = 0
        while R > 0 and D > 0:
            r = R %10
            d = D %10
            #print(r, d)
            
            dx = (r - d) %10
            sx = (d - r) %10
            #print(dx, sx)
            
            ans += min(dx, sx)
            
            R //= 10
            D //= 10
            #print()
            
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        R, D = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.rotationCount(R, D))
# } Driver Code Ends