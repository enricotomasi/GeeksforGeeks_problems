#User function Template for python3
import sys;

class Solution:
    def countElements(self, N, A):
        #code here
        a = list(set(A));
        a.sort();
        
        n = len(a);
        #print (a);
        
        #print(a[n-1], a[0]);


        return (a[n-1] - a[0]) - (n - 1);
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        A=list(map(int,input().strip().split()))
        ob=Solution()
        print(ob.countElements(N,A))
# } Driver Code Ends