#User function Template for python3
import sys

class Solution:
	def maxOnes(self, s):
		# code here
		n = len(s)
		arr = [0] * n
		uni = 0

        for i in range(n):
            if s[i] == "1":
                uni += 1
                arr[i] = -1
            elif s[i] == "0":
                arr[i] = 1
                
        somma = 0
        m = sys.maxsize * -1
        
        for it in arr:
            #print(somma)
            somma += it
            
            m = max(m, somma)
            
            if somma < 0:
                somma = 0
            
        return m + uni

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		s = input()
		ob = Solution()
		ans = ob.maxOnes(s)
		print(ans)

# } Driver Code Ends