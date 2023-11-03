#User function Template for python3
class Solution:
	def distinctValues(self, n, a, b, c, d):
		# code here
	    temp1 = b - c
	    temp2 = a - d
	    ans = 0
	    
	    y = 0
	    z = 0
	    w = 0
	    
	    for x in range(1, n + 1):
	        y = x - temp1
	        w = x - temp2
	        z = y - temp2
	        
	        if y >= 1 and y <= n and w >=1 and w <= n and z >= 1 and z <= n:
	            ans += 1
	   
	    return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n,a,b,c,d = input().split()
		n=int(n)
		a=int(a)
		b=int(b)
		c=int(c)
		d=int(d)
		ob = Solution();
		print(ob.distinctValues(n,a,b,c,d))

# } Driver Code Ends