#User function Template for python3

class Solution:
    def rightAngTri(self, a, b, c):
        # code here 
        if a > b and a > c:
            if (a*a) == (b*b) + (c*c):
                return "Yes"
   
        elif b > a and b > c:
            if (b*b) == (a*a) + (c*c):
                return "Yes"
      
        elif c > b and c > a:
            if (c*c) == (b*b) + (a*a):
                return "Yes"
      
        return "No"

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        a,b,c=map(int,input().split())
        
        ob = Solution()
        print(ob.rightAngTri(a,b,c))
# } Driver Code Ends