#User function Template for python3

class Solution:
    def isKaprekar(self, N):
        #code here
        
        q = N*N
        
        cifre = []
        somma = 0
        
        while q > 0:
            digit = q % 10
            cifre = [digit] + cifre
            somma += digit
            q //= 10
        
        #print(q)
        #print(cifre)
        
        n = len(cifre)
        
        for i in range(1, n):
            sx = ""
            for j in range(0, i):
                sx += str(cifre[j])
            
            dx = ""
            for j in range(i, n):
                dx += str(cifre[j])
            
            s = int(sx)
            d = int(dx)
            
            #print(s, d)
            
            if s != 0 and d != 0 and ((s+d) == N):
                return 1
        
        return 0
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.isKaprekar(N))
# } Driver Code Ends