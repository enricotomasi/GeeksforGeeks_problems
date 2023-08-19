#User function Template for python3
import itertools


class Solution:
	def permutaion(self, N):
		# Code here
		s = str(N)
		l = list(s)
		
		#print(l)
		
		perm = list(itertools.permutations(l))
		
		perm = list(dict.fromkeys(perm))
		
		#print(perm)
		
		ans1 = 0
		ans2 = 0
		
		for it in perm:
		    st = "".join(it)
		    #print(st)
		    ans1 += 1
		    ans2 += int(st)
		

        return [ans1, ans2]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.permutaion(N)
		for _ in ans:
			print(_, end = " ")
		print()
# } Driver Code Ends