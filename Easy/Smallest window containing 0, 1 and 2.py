#User function Template for python3
import sys

class Solution:
    def smallestSubstring(self, S):
        # Code here
        n = len(S)
        ans = sys.maxsize
        
        left = 0
        right = 0
        
        m = {"0": 0, "1": 0, "2": 0}
        
        while right < n:
            m[S[right]] += 1
            
            while m["0"] and m["1"] and m["2"]:
                l = right - left + 1
                ans = min(ans, l)
                m[S[left]] -= 1
                left += 1
            right += 1
        
        if ans < sys.maxsize:
            return ans
        
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		S = input()
		ob = Solution()
		ans = ob.smallestSubstring(S)
		
		print(ans)



# } Driver Code Ends
