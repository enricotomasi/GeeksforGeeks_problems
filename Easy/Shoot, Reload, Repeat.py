#User function Template for python3

class Solution:
    def isValid(self, s, n):
        # code here
        colpi = n
        
        for c in s:
            if c == "S":
                colpi -= 1;
            elif c == "R":
                colpi = n
            
            if colpi < 0:
                return 0
        
        
        return 1
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        n = int(input())
        ob = Solution()
        ans = ob.isValid(s,n)
        print(ans)
# } Driver Code Ends