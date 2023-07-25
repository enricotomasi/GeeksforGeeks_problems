#User function Template for python3

class Solution:
    def remArray(self, N, arr, K):
        # code here
        
        # To avoid overflow, don't multiply all the numbers at once. 
        # Instead, you need to use the property of modulus, i.e.
        # ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
        
        prod = 1
        
        for it in arr:
            prod = ((prod % K) * (it % K)) % K

        return prod % K
    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        K=int(input())
        
        ob = Solution()
        print(ob.remArray(N,arr,K))
# } Driver Code Ends