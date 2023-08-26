#User function Template for python3


class Solution:
    def EqualString(self, s, t):
        # Code here
        n = len(s)
        nt = len(t)
        
        if n != nt:
            return 0
            
        oddS = []
        evenS = []
        
        oddT = []
        evenT = []
        
        for i in range(n):
            if i % 2 == 0:
                oddS += s[i]
                oddT += t[i]
            else:
                evenS += s[i]
                evenT += t[i]
                
        oddS.sort();
        evenS.sort();
        
        oddT.sort();
        evenT.sort();
        
        if oddS == oddT and evenS == evenT:
            return 1
            
        return 0
            
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		s, t = input().split()
		ob = Solution()
		ans = ob.EqualString(s, t)
		print(ans)
# } Driver Code Ends