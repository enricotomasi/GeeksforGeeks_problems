 
#User function Template for python3
class Solution:
	def numberPattern(self, N):
		# code here
		
		ans = []
		for i in range (N):
		    if (i==0) : ans.append(1)
		    else :
	            sinistra = ""
	            destra = ""
	            for k in range(i+1):
	                sinistra += str(k+1)
	                destra += str(i-k)
	            ans.append(sinistra+destra[:len(destra)-1])
	            
        return ans
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        N = int(input())
        ob = Solution()
        res = ob.numberPattern(N)
        for each in res:
            print(each, end=" ")
        print()
        

# } Driver Code Ends