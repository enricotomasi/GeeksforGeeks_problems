#User function Template for python3

class Solution:
	def minimumMoves(self, s):
		# Code here
        n = len(s)
        
        zeroes = 0
        
        maxi = 0
        count = 0
        
        for i in range(n):
            if s[i] == "0":
                zeroes += 1
                count += 1
            else:
                count = 0
            
            maxi = max(maxi, count)
        
        count = 0
        
        for i in range(n):
            if s[i] != "0":
                break
            count += 1
        
        for i in range(n-1, -1, -1):
            if s[i] != "0":
                break
            count += 1

        maxi = max (maxi, count)
        
        ans = zeroes - maxi
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution()
		ans = ob.minimumMoves(s)
		print(ans)

# } Driver Code Ends