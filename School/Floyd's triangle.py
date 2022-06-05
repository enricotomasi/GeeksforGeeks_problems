 
#User function Template for python3

class Solution:
    def printFloydTriangle(self, N):
    	#code here 
        
        conta = 1
        for i in range(N):
            ciclo = i+1
            for j in range(ciclo):
                print (conta, end=" ")
                conta+=1;
            print()
        
            
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printFloydTriangle(N)
        
# } Driver Code Ends