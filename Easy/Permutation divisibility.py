#User function Template for python3
from itertools import permutations

class Solution:
    def divisible_by_four(self, s):
        # Code here
        n = len(s)
        
        if n == 1:
            if (ord(s[0]) - ord("0")) % 4 == 0:
                return 1
            return 0
        
        for i in range(n):
            for j in range(i+1, n):
                a = (ord(s[i]) - ord("0")) * 10 + (ord(s[j]) - ord("0"))
                b = (ord(s[j]) - ord("0")) * 10 + (ord(s[i]) - ord("0"))
                
                if a %4 == 0 or b %4 == 0:
                    return 1
        
        return 0
            
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		s=input()
		ob = Solution()
		ans = ob.divisible_by_four(s)
		print(ans)
# } Driver Code Ends