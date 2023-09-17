#User function Template for python3

class Solution:
    #Function to return list containing first n fibonacci numbers.
    def printFibb(self, n):
        # your code here
        ans = [1]
        
        a = 1
        b = 1
        fibo = 1
        
        for i in range(n-1):
            ans += [fibo]
            fibo = a + b
            a = b
            b = fibo
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__': 
    t=int(input())
    for tcs in range(t):
        
        n=int(input())
        res = Solution().printFibb(n)
        for i in range (len(res)):
            print (res[i], end = " ") 
        print()
# } Driver Code Ends