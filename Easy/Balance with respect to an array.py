#User function Template for python3

class Solution:
    def isBalanced(self, a, n, x):
        # a è ordinato
        # ceil  = primo valore più piccolo o uguale ad x
        # floor = primo valore più grande o uguale a x
        # se abs(x - floor(a)) == abs(x - ceil(a) ritorna "Balanced" se no "Unbalance"

        f = -1;
        c = -1;
        
        if a[n-1] == x:
            return "Balanced";
        
        for i in range(n-1):
            if (a[i] == x):
                return "Balanced";
                break;
            if (a[i] <= x and a[i+1] >= x):
                c = a[i];
                f = a[i+1];
        
        
        if (abs(x-f) == abs(x-c)):
            return "Balanced";
        
        return "Not Balanced";
                

#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    x=int(input())
    ob=Solution()
    print(ob.isBalanced(a,n,x))


# } Driver Code Ends