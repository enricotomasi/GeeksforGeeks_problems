#User function Template for python3


class Solution:
    def SortedString(self, s:str) -> str:
        # code here
        n = len(s)
        cons = []
        voc = []
        
        for c in s:
            if c == "a" or c == "e" or c == "i" or c == "o"  or c == "u":
                voc += c
            else:
                cons += c
        
        cons.sort()
        cons = cons[::-1]
        
        voc.sort()
        voc = voc[::-1]
        
        
        #print(cons)
        #print(voc)

        vocale = False;
        if s[0] == "a" or s[0] == "e" or s[0] == "i" or s[0] == "o"  or s[0] == "u":
            vocale = True
                
        c = len(cons) - 1 
        v = len(voc) - 1
        
        ans = ""
        for i in range(n):
            #print(vocale)
            if vocale == True:
                if v >= 0:
                    ans += voc[v]
                    v -= 1
                else:
                    ans += cons[c]
                    c -= 1
            else:
                if c >= 0:
                    ans += cons[c]
                    c -= 1
                else:
                    ans += voc[v]
                    v -= 1
        
            vocale = not vocale
        
        return ans
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		s=input()
		ob = Solution()
		ans = ob.SortedString(s)
		print(ans)
# } Driver Code Ends