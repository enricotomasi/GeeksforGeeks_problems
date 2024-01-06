#User function Template for python3

class Solution:
    def rremove (self, s):
        #code here
        n = len(s)
	    
	    temp = ""
	    i = 0
	    
	    while i < n:
	        flag = False
	        
	        while n > i + 1 and s[i] == s[i + 1]:
	            flag = True
	            i += 1
	            
	        if flag == True:
	            i += 1
	            continue
	        
	        if i < n:
	            temp += s[i]
	        i += 1
	        
	    if temp == s:
	        return temp
	    
	    ans = self.rremove(temp)
	    
	    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range (t):
        S = input()
        ob = Solution()
        print(ob.rremove(S))


# } Driver Code Ends