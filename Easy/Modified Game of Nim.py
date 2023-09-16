#User function Template for python3
import collections

class Solution:
    def findWinner(self, n, A):
        # code here
        if n == 1:
            return 2
        
        mappa = dict()
        
        for it in A:
            if it in mappa:
                mappa[it] += 1
            else:
                mappa[it] = 1
        
        #print(mappa)
        
        m = []
        
        for it in mappa:
            m += [mappa[it]]
            
        m.sort()
        
        #print (m)
        
        nm = len(m)
        if (nm == 1):
            return 1
        
        tot = 0
        
        for i in range(nm-1, -1, -1):
            tot += m[i]
        
        if tot % 2 == 0:
            return 1
            
        return 2
        
            
        
        
        
        
        
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        A = input().split()
        for itr in range(n):
            A[itr] = int(A[itr])

        ob = Solution()
        print(ob.findWinner(n, A))

# } Driver Code Ends