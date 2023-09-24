#User function Template for python3

class Solution:
    def maximizeVolume(self, S):
        # code here 
        if S < 3:
            return -1
        elif S == 3:
            return 1
        
        q = S // 3
        r = S % 3
        
        #print(q, r)
       
        if r == 0:
            return q * q * q 
        elif r == 1:
            return (q + 1) * q * q
        else:
            return (q + 1) * (q + 1) * q

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=int(input())
        
        ob = Solution()
        print(ob.maximizeVolume(S))
# } Driver Code Ends