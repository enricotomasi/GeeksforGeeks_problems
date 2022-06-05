 
#User function Template for python3
class Solution:
	def removeCharacters(self, S):
		# code here
		ans = ""
		
		for c in S:
		    if ord(c) >= 48 and ord(c) <= 57:
		        ans += c
		return ans
		

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		
		ob = Solution()	
		answer = ob.removeCharacters(s)
		
		print(answer)


# } Driver Code Ends