#User function Template for python3

class Solution:
    def pairAndSum(self, n, arr):
        #code here
        ans = 0
        
        for i in range(32):
            temp = 0
            
            for j in arr:
                if (1 << i) & j != 0:
                    temp += 1
            
            ans += 2 ** i * temp * (temp - 1) // 2
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        Arr=list(map(int,input().strip().split(' ')))
        ob=Solution()
        print(ob.pairAndSum(N,Arr))
# } Driver Code Ends
