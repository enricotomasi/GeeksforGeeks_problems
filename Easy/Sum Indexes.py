#User function Template for python3

class Solution:
    def pairCount(self, N, A, B, C):
        # code here
        ans = 0
        d = {}
        
        for it in C:
            d[it] = 0
            
        #print(d)
        
        for i in range(N):
            target = A[i] - B[i]
            #print (A[i], target)
            if target in d:
                ans +=1
            
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = input().split()
        B = input().split()
        C = input().split()
        for it in range(N):
            A[it] = int(A[it])
            B[it] = int(B[it])
            C[it] = int(C[it])
        
        ob = Solution();
        print(ob.pairCount(N, A, B, C))
# } Driver Code Ends