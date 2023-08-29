#User function Template for python3

class Solution:
    def arrangeString(self, s, x, y):
        # code here
        n = len(s)
        
        ans = list(s)
        
        a = 0
        b = 0
        
        for i in range(n):
            if ans[i] == "0":
                a += 1
            else:
                b += 1
                
        j = 0
        
        while a > 0 or b > 0:
            
            i = 0
            while i < x and a > 0:
                if a > 0:
                    ans[j] = "0"
                j += 1
                a -= 1
                i += 1
            
            i = 0
            while i < y and b > 0:
                if b > 0:
                    ans[j] = "1"
                j += 1
                b -= 1
                i += 1
        
        return "".join(ans)
            
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        x,y = input().strip().split(" ")
        x,y = int(x), int(y)
        s = input().strip()
        ob = Solution()
        ans = ob.arrangeString(s,x,y)
        print(ans)
# } Driver Code Ends