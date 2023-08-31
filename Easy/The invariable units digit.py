#User function Template for python3

class Solution:
    def unitDigit(self, N, P):
        # code here
        n = int(N)

        temp = n ** P
        
        t = 0
        if temp <= 9:
            t = temp
        else:
            t = temp %10
        
        p = 0
        if n <= 9:
            p = n
        else:
            p = n % 10
        
        if t == p:
            return 1
            
        return 0
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = input().strip()
        P = int(input().strip())
        ob = Solution()
        if ob.unitDigit(N,P):
            print("1")
        else:
            print("0")
# } Driver Code Ends