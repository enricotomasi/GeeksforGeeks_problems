#Back-end complete function Template for Python 3

class Solution:
    def maxSubStr(self, str):
        #Write your code here
        n = len(str)
        
        zn = 0
        on = 0
        
        z = []
        o = []
        
        for c in str:
            if c == "0":
                zn += 1
            elif c == "1":
                on += 1
            
            z += [zn]
            o += [on]
        
        ans = 0
        
        for i in range(n):
            if z[i] == o[i]:
                ans += 1
        
        if ans == 0 or (z[n-1] != o[n-1]):
            return -1
        
        return ans



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        s=input()
        obj=Solution()
        ans=obj.maxSubStr(s)
        print(ans)
# } Driver Code Ends