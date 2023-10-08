
#User function Template for python3

class Solution():
    def cbaSubsequence(self, s, n):
        #your code goes here
        ans = list(s)
        
        ans.sort()
        
        return ''.join(ans)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        s = input()
        print(Solution().cbaSubsequence(s, n))
# } Driver Code Ends