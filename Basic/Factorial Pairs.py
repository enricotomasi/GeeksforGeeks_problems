#User function Template for python3
import math

class Solution:
    def countPerfectSquares (self, L, R):
        # code here
        ans = math.floor(math.sqrt(R)) - math.floor(math.sqrt(L))
        
        if L >= 0:
            temp = math.floor(math.sqrt(L))
            if temp * temp == L:
                return ans + 1
            
        return ans
                
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		L,R = input().split()
		L=int(L)
		R=int(R)
		ob = Solution();
		print(ob.countPerfectSquares(L,R))

# } Driver Code Ends