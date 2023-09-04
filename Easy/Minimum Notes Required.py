#User function Template for python3

class Solution:
    def getLoss(self, N, M):
        # code here
        monete = [1000, 500, 100, 50, 20, 10, 5, 2, 1]
        
        ans = N
        c = 0
        
        for i in range(M):
            while ans - monete[c] < 0:
                c += 1
                if c >= len(monete):
                    return 0
            #print(ans, monete[c])
            
            ans -= monete[c]
        
        return ans
            
            
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,M=map(int,input().split())
    
        ob = Solution()
        print(ob.getLoss(N,M))
# } Driver Code Ends