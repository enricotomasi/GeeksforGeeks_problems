#User function Template for python3



class Solution:
    def evenDecimalSubStr (self, N, S):
        # code here
        ans = 0
        
        for i in range(N):
            if S[i] == "0":
                ans += (N-i)
        
        return ans
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        S = input()
        ob = Solution()
        print(ob.evenDecimalSubStr(N, S))
# } Driver Code Ends