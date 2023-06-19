#User function Template for python3

class Solution:
    def isPossible(self, a, b):
        #Code here
        if (a == 1 and b == 2) or (a == 2 and b == 1) or (a == 3 and b == 2) or (a == 2 and b == 3):
            return True
        
        return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        a,b=input().split()
        a=int(a)
        b=int(b)
        
        obj=Solution()
        ans=obj.isPossible(a,b)
        if(ans==True):
            print(1)
        else:
            print(0)
# } Driver Code Ends