#User function Template for python3
import itertools

class Solution:
    def find_permutation(self, S):
        # Code here
        perm = itertools.permutations(S)
        
        ans = set()
        
        for it in perm:
            st = ("".join(it))
            ans.add(st)
        
        ans = list(ans)
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		S=input()
		ob = Solution()
		ans = ob.find_permutation(S)
		ans.sort()
		for i in ans:
			print(i,end=" ")
		print()
# } Driver Code Ends