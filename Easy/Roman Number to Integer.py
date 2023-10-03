#User function Template for python3


class Solution:
    def romanToDecimal(self, S): 
        # code here
        conv = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }

        n = len(S)
        
        ans = 0
        
        for i in range(n-1):
            cur = conv[S[i]]
            nex = conv[S[i + 1]]
            
            
            if cur >= nex:
                ans += cur
            else:
                ans -= cur
        
            #print(S[i], S[i+1], cur, nex, " ###### ", ans)
            
        #print(S[n-1], conv[S[n-1]])
        
        ans += conv[S[n-1]]
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for _ in range(t):
        ob = Solution()
        S = input()
        print(ob.romanToDecimal(S))
# } Driver Code Ends