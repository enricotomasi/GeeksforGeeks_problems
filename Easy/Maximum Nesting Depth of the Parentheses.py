#User function Template for python3

class Solution:
    def maxDepth(self, s):
        # Code here
        ans = -1;
        
        level = 0;

        for c in s:
            if (c == '('):
                level += 1;
            elif (c == ')'):
                level -= 1;
            
            ans = max(ans, level);

        return ans;
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        ob = Solution()
        print(ob.maxDepth(s))
# } Driver Code Ends