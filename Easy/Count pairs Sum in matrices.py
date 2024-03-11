#User function Template for python3
class Solution:
	def countPairs(self, mat1, mat2, n, x):
		# code here
		
		nn = n * n
		ans = 0
		n2 = nn - 1
		
		for n1 in range(nn):
		    while n2 >= 0:
		        
    		    x1 = n1 // n
    		    y1 = n1 % n
    		    
    		    x2 = n2 // n
    		    y2 = n2 % n
    		    
    		    #print(f"n1: {n1}, n2: {n2} x1: {x1}, x2: {x2}, y1: {y1}, y2: {y2}")
    		    s = mat1[x1][y1] + mat2[x2][y2]
    		    
    		    if s == x:
    		        ans += 1
    		    elif s < x:
    		        break
    		    
    		    n2 -= 1

	    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n , x = input().split()
		n,x = int(n), int(x)
		mat1 = []
		for _ in range(n):
			a = [int(x) for x in input().split()]
			mat1.append(a)

		mat2 = []
		for _ in range(n):
			a = [int(x) for x in input().split()]
			mat2.append(a)

		ob = Solution()
		ans = ob.countPairs(mat1, mat2, n, x)
		print(ans)

# } Driver Code Ends
