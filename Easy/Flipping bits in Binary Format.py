#User function Template for python3

class Solution:
    def flipBits(self, N):
        # code here
        
        #print(type(N))
        
        bin = ""
        
        while N > 0:
            if N % 2 == 0:
                bin += "1"
            else:
                bin += "0"
            N //= 2
        
        #print(bin)
        
        o = ""
        
        for i in range(32 - len(bin)):
            o += "1"
        
        rev = bin + o
        
        dec = 0

        for i in range(31, -1, -1):
            if rev[i] == "1":
                dec += pow(2, i)


        return [dec, rev];

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        ans = ob.flipBits(N)
        print(ans[0],end=" ")
        print(ans[1])
# } Driver Code Ends