#User function Template for python3

class Solution:
    def daysOfWeeks(self, N ,K):
        # code here
        g = [0] * 7
        
        #print("N:", N)
        #print(g[0], g[1], g[2], g[3], g[4], g[5], g[6])
    
        for i in range(K-1, 7):
            if N > 0:
                g[i] +=1
                N -= 1
            
        #print(g[0], g[1], g[2], g[3], g[4], g[5], g[6])
        
        if (N <= 0):
            return [g[0], g[1], g[2], g[3], g[4], g[5], g[6]];
        
        #print("N:", N)
        
        intere = N // 7
        
        #print(f"intere: {intere}")
        
        for i in range(7):
            g[i] += intere
        
        #print(g[0], g[1], g[2], g[3], g[4], g[5], g[6])
        
        #print("N % 7:", N % 7)
        
        for i in range(N % 7):
            g[i] += 1
            
        
        return [g[0], g[1], g[2], g[3], g[4], g[5], g[6]];


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K= map(int,input().split())
        ob = Solution()
        print(*ob.daysOfWeeks(N,K))
# } Driver Code Ends