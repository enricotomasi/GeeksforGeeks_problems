#User function Template for python3

class Solution:
    
    #Function to find the largest number after k swaps.

    
    def findMaximumNum(self, s, k):
        #code here
        def rec(s, k, sa, idx):
            n = len(s)
            
            if idx >= n - 1 or k <= 0:
                return
            
            m = s[idx]
            
            for i in range(idx + 1, n):
                if int(m) < int(s[i]):
                    m = s[i]
            
            if s[idx] != m:
                k -= 1
    
            for i in range(idx, n):
                if m == s[i]:
                    s[idx], s[i] = s[i], s[idx]
                    temp = "".join(s)
                    
                    if int(temp) > int(sa[0]):
                        sa[0] = temp
                    
                    rec(s, k, sa, idx + 1)
                    s[idx], s[i] = s[i], s[idx]
        
        sa = [s]
        s = list(s)

        rec(s, k, sa, 0)
        
        return sa[0]
        
        
        
        #{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        k = int(input())
        s = input()
        ob=Solution()
        print(ob.findMaximumNum(s,k))

# } Driver Code Ends
