#User function Template for python3

class Solution:
    def noOfDigits(self, N):
        # code here
        a = 0
        b = 1
        fibo = 0

        for i in range(N-1):
            fibo = a + b
            a = b
            b = fibo
        
        #print(fibo)
        
        sfibo = str(fibo)
        
        return len(sfibo)
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.noOfDigits(N))
# } Driver Code Ends