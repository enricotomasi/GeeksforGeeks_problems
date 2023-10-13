#User function Template for python3

class Solution:
    def solve(self, n, s):
        ans = 0
        # Write your code here
        q = []
        notserved = []

        ans = 0

        for it in s:
            if it in q:
               n += 1
               q.remove(it)
            else:
                if it not in notserved:
                    notserved += [it]
                    if n <= 0:
                        ans += 1
                    else:
                        q += [it]
                        n -=1
            #print(it, n)
        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range (int(input())):
    n = int(input())
    s = input().strip()
    ob = Solution()
    ans = ob.solve(n,s)
    print(ans)
# } Driver Code Ends