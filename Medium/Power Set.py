#User function Template for python3
import itertools

class Solution:
	def AllPossibleStrings(self, s):
		# Code here
        n = len(s)
		ans = []
    
        for i in range(1, 2 ** n):
            temp = ""
            
            for j in range(n):
                if (i >> j) & 1:
                    temp += s[j]
            
            ans.append(temp)
        
        return sorted(ans)
        
#{ 
 # Driver Code Starts

#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution();
		ans = ob.AllPossibleStrings(s)
		for i in ans:
			print(i, end = " ");
		print()
# } Driver Code Ends
