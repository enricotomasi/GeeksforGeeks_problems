#User function Template for python3
class Solution:
	def isDivisible(self, s):
		# code here
		n = len(s)
		pari = 0
		dispari = 0
		
		for i in range(n):
		    if s[i] == '1':
		        if i%2 == 0:
		            pari += 1
		        else:
		            dispari +=1
		
		if (dispari - pari) % 3 == 0:
		    return 1
		   
		return 0
		


#{ 
 # Driver Code Starts

#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution()
		ans = ob.isDivisible(s)
		print(ans)

# } Driver Code Ends