#User function Template for python3

class Solution:
    def maximum_index(self, s):
        # Code here
        n = len(s)
        ans = 0
        curr = ord("a")
        
        for i in range(n):
            if ord(s[i]) == curr+1:
                curr = ord(s[i])
                ans = i
            if ord(s[i]) <= curr:
                ans = i
        
        return ans
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		s=input()
		ob = Solution()
		ans = ob.maximum_index(s)
		print(ans)

# } Driver Code Ends