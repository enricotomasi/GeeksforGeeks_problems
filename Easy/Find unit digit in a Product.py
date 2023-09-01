#User function Template for python3
def cal(a, b):
    if b == 0:
        return 1
        
    c = a % 10
    
    if c == 0 or c == 1 or c == 5 or c == 6:
        return c

    if c == 2:
        if b % 4 == 0:
            return 6
        if b % 4 == 1:
            return 2
        if b % 4 == 2:
            return 4
        if b % 4 == 3:
            return 8
    
    if c == 3:
        if b % 4 == 0:
            return 1
        if b % 4 == 1:
            return 3
        if b % 4 == 2:
            return 9
        if b %4 == 3:
            return 7
    
    if c == 4:
        if b % 2 == 0:
            return 6
        if b %2 == 1:
            return 4

    if c == 7:
        if b % 4 == 0:
            return 1
        if b % 4 == 1:
            return 7
        if b % 4 == 2:
            return 9
        if b % 4 == 3:
            return 3
    
    if c == 8:
        if b % 4 == 0:
            return 6
        if b % 4 == 1:
            return 8
        if b % 4 == 2:
            return 4
        if b % 4 == 3:
            return 2
            
    if c == 9:
        if b % 2 == 0:
            return 1
        if b % 2 == 1:
            return 9


class Solution:
    def theLastDigit (self, a, b, c, d, e, f):
        # code here 
        x = cal(a, b)
        y = cal(c, d)
        z = cal(e, f)
        
        return (x*y*z) % 10


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        a,b,c,d,e,f=map(int,input().strip().split(" "))

        ob = Solution()
        print(ob.theLastDigit(a,b,c,d,e,f))
# } Driver Code Ends