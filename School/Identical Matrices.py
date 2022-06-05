 
#User function Template for python3

class Solution:
    def areMatricesidentical(self,N,Grid1,Grid2):
        #code here
        for i in range(N):
           for j in range(N):
               if Grid1[i][j] != Grid2[i][j] : return 0
        
        return 1
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        Grid1 = [[0 for i in range(N)] for j in range(N)]
        for i in range(N):
            s=list(map(int,input().strip().split(' ')))
            for j in range(N):
                Grid1[i][j]=s[j]
        Grid2 = [[0 for i in range(N)] for j in range(N)]
        for i in range(N):
            s=list(map(int,input().strip().split(' ')))
            for j in range(N):
                Grid2[i][j]=s[j]        
        ob=Solution()
        print(ob.areMatricesidentical(N,Grid1,Grid2))
# } Driver Code Ends