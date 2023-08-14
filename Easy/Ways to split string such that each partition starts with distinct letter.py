#User function Template for python3

class Solution:
    def waysToSplit(self, S):
        # code here
        m = 1000000007

        mappa = dict()
        
        for it in S:
            if it in mappa:
                mappa[it] += 1
            else:
                mappa[it] = 1
        
        mappa[S[0]] = 1
        
        ans = 1
        
        for it in mappa.keys():
            ans *= mappa[it] %m
        
        return ans %m

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        
        ob = Solution()
        print(ob.waysToSplit(S))
# } Driver Code Ends