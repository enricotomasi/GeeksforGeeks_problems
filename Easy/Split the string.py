#User function Template for python3

class Solution:
    def isPossible (self, S):
        # code here 
        n = len(S)
        
        if n >= 10:
            return 1
            
        
        if n == 4:
            if S[0] != S[1] and S[0] != S[2] and S[0] != S[3] and S[1] != S[2] and S[1] != S[2] and S[2] != S[3]:
                return 1
            return 0
        
        for i in range(1, n-3):
            for j in range(i+1, n-2):
                for k in range(j+1, n-1):
                    s1 = s[0:i+1]
                    s2 = s[i:j+1]
                    s3 = s[j:k+1]
                    s4 = s[k:n]
                    
                    #print(i, j, k)
                    #print(s1, s2, s3, s4)
                    
                    if s1 != s2 and s1 != s3 and s1 != s4 and s2 !=s3 and s2 != s4 and s3 != s4:
                        return 1
        
        return 0

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
       
        s = input()
       
        ob = Solution()
        print(ob.isPossible(s))

# } Driver Code Ends