#User function Template for python3

class Solution:
    def isBrightened(self, N, K, A):
        # code here
        almenouna = False
        luce = 0
        
        for it in A:
            if it == 0:
                luce -= 1
            else:
                almenouna = True
                if luce < K * -1:
                    return 0
                luce = K
        
        if not almenouna:
            return 0
        
        # print(luce, K)
        if luce < 0:
            return 0
        
        return 1
        
        
            
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, K = [int(x) for x in input().split()]
        A = input().split()
        for i in range(N):
            A[i] = int(A[i])
        
        ob = Solution()
        print(ob.isBrightened(N, K, A))
# } Driver Code Ends