#User function Template for python3

class Solution:
	def LexicographicallyMinimum(self, str):
		# Code here
		n = len(str)
		codici = []
		for i in str:
		    codici += [ord(i)]
		
	    codici.sort()
	    codici = list(dict.fromkeys(codici))
	    
	    #print(codici)

        sub1 = '*'
        sub2 = '*'

        p0 = 0
        usati = []
        
        while True:
            #print(p0)
            if (p0 >= n):
                break
            
            min = '~'
            mp = -1
            for i in range(p0+1, n):
                if str[i] < min and str[i] not in usati and str[i] != min:
                    mp = i
                    min = str[i]
                    
            #print(min, mp)
            
            if str[p0] > min:
                sub1 = str[p0]
                sub2 = str[mp]
                break
            
            usati += str[p0]
            #print(usati)
            p0 += 1
            #print()
    
        if sub1 == '*':
            return str
        
        ans = ""
        
        #print(sub1, sub2)
        
        for c in str:
            if c == sub1:
                ans += sub2
            elif c == sub2:
                ans += sub1
            else:
                ans += c
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		str = input()
		ob = Solution()
		ans = ob.LexicographicallyMinimum(str)
		print(ans)

# } Driver Code Ends