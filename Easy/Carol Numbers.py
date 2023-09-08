#User function Template for python3
class Solution:
    def nthCarolNumber (self, n):
        # code here 
        m = 1000000007
        
        a = 2
        b = 1
        
        while n > 0:
            if n % 2 != 0:
                b = ((b % m) * (a % m)) % m
            a = ((a % m) * (a % m)) % m
            n = n >> 1
        
        return ((b - 1) * (b - 1)) % m - 2
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        n=int(input())
     

        ob = Solution()
        print(ob.nthCarolNumber(n))
# } Driver Code Ends