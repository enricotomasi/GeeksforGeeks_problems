#User function Template for python3
class Solution:
    def sameFreq(self, s):
        # code here
        d = {}
        
        for char in s:
            d[char] = d.get(char, 0) + 1

        d = list(d.values())
        
        dd = set(d)

        if len(dd) == 1:
            return True

        if len(dd) > 2:
            return False

        if d.count(max(d)) == 1 and max(d) - min(d) == 1:
            return True
        elif d.count(min(d)) == 1 and min(d) == 1:
            return True
            
        return False

        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
	T=int(input())

	for _ in range(T):
		s = input()
		ob = Solution()
		answer = ob.sameFreq(s)
		if answer:
			print(1)
		else:
			print(0)

# } Driver Code Ends
