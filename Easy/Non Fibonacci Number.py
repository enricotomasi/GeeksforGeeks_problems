#User function Template for python3
1
class Solution:
    def nonFibonacci(self, N):
        # code here
        fibo = 0
        
        a = 1
        b = 1
        
        while N >= b:
            fibo = a + b
            N -= (b - 1)
            a = b
            b = fibo
        
        return a + b + N 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.nonFibonacci(N))
# } Driver Code Ends