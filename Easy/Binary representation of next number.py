#User function Template for python3
class Solution:
	def binaryNextNumber(self, s):
		# code here
		n = len(s)
		
		c = 0
		for c in range(n):
            if s[c] == '1':
                break
        
        s = s[c::]
        
        n = len(s)
		
		ans = ""
		added = False
		
		for i in range(n - 1, -1, -1):
            #print(s[i], added);
            
            if added == True:
                ans = s[i] + ans
            else:
                if s[i] == '0':
                    added = True
                    ans = '1' + ans
                else:
                    ans += '0';
  
        if added == False:
            ans = '1' + ans

        return ans;

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input()
        ob = Solution()
        ans = ob.binaryNextNumber(S)
        print(ans)

# } Driver Code Ends
