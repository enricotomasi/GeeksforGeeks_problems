#User function Template for python3

class Solution:
	def FindPath(self, str):
		# Code here
		n = len(str)
		ans = n
		
		i = 0
        
        x = 0
        y = 0
        
        while i < n:
            a = ord(str[i]) - ord("a")
            tx = a // 5
            ty = a % 5
            
            ans += abs(tx - x)
            ans += abs(ty - y)
            
            x = tx
            y = ty
            
            i += 1

        return ans 
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		str = input()
		ob = Solution()
		ans = ob.FindPath(str)
		print(ans)

# } Driver Code Ends