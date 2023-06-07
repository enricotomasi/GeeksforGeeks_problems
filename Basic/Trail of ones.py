#User function Template for python3
class Solution:
    def numberOfConsecutiveOnes (ob,N):
        # code here 
        a = 1
        b = 0
        c = 0

        for i in range(N-1):
            ans = a + b + c
            a, b, c = a<<1, ans, b
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N=int(input())
        

        ob = Solution()
        print(ob.numberOfConsecutiveOnes(N))
# } Driver Code Ends