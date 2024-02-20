#User function Template for python3

class Solution:
    def wordBreak(self, n, s, dictionary):
        # Complete this function
        dic = sorted(dictionary[::], key = lambda i : len(i))
        dic = dic[ : : -1]
        
        for it in dic:
            while it in s:
                s = s.replace(it, "")
        
        if len(s) == 0:
            return True
        
        return False
                

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	test_case = int(input())

	for _ in range(test_case):
		n = int(input())
		dictionary = [word for word in input().strip().split()]
		s = input().strip()
		ob = Solution()
		res = ob.wordBreak(n, s, dictionary)
		if res:
			print(1)
		else:
			print(0)
# } Driver Code Ends
