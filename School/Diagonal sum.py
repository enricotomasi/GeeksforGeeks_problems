 
#User function Template for python3

class Solution:
	def DiagonalSum(self, matrix):
		# Code here
		n = len(matrix);
		diag1=0
		diag2=0
		for i in range (n):
		    diag1+= matrix[i][i]
		    diag2+= matrix [i][n-i-1]

		return diag1+diag2
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		matrix = []
		for _ in range(n):
			matrix.append(list(map(int,input().split())))
		ob = Solution()
		ans = ob.DiagonalSum(matrix)
		print(ans)
# } Driver Code Ends