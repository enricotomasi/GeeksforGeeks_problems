class Solution:
    def distributeTicket(self, N : int, K : int) -> int:
        # Code Here
        testa = 1
        coda = N
        
        while True:
            #print(testa, " ", coda)
            if testa + K > coda:
                return coda
            else:
                testa += K
                
            if coda - K < testa:
                return testa
            else:
                coda -= K
            


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    
    N, K = map(int, input().split())
    
    obj = Solution()
    res = obj.distributeTicket(N, K)
    
    print(res)
# } Driver Code Ends