#User function Template for python3

class Solution:
    def nthCharacter(self, s, r, n):
        # code here
        s = s[int(n // (2 ** r))]
        ans = []
        
        for i in range(r):
            ans = []
        
            for i in range(len(s)):
                if s[i] == "0":
                    ans.append("0")
                    ans.append("1")
                else:
                    ans.append("1")
                    ans.append("0")
            
            s = ''.join(ans)
        
        
        return ans[int(n % 2 ** r)]
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        snr = input().split()
        S, R, N = snr[0], int(snr[1]), int(snr[2])
        ob = Solution()
        print(ob.nthCharacter(S, R, N))
# } Driver Code Ends