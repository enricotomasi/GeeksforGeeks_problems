 
#User function Template for python3

class Solution:
    def modify(self, s):
        # code here
        
        lista = []
        
        for c in s:
            if c == "a" or c=="e" or c=="i" or c=="o" or c=="u":
                lista.append(c)
            
        lista.reverse()
        
        ans = ""
        vocale = 0;
        
        for c in s:
            if c == "a" or c=="e" or c=="i" or c=="o" or c=="u":
                ans += lista[vocale]
                vocale+=1
            else:
                ans += c
        
        return ans;
            
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.modify(s)
        print(ans)
# } Driver Code Ends