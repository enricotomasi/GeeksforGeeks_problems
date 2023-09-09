#User function Template for python3
import datetime

class Solution:
	def Count(self, a, b):
		# Code here

        ans = 0 
        
        for i in range(a, b + 1):
            data = datetime.datetime(i, 1, 1)
            if (data.strftime("%A")) == "Sunday":
                ans += 1 

        return ans

 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		a, b = input().split()
		a = int(a); b =int(b);
		ob = Solution()
		ans = ob.Count(a, b)
		print(ans)

# } Driver Code Ends