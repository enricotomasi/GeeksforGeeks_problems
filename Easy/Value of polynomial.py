#User function Template for python3

class Solution:
    def value(self, n, poly, x):
        # code here
        m = 1e9 + 7
        
        ans = poly[n-1] %m
        
        pot = 1
        for i in range(n-2, -1, -1):
            #print("\n", poly[i], pot)
            if poly[i] != 0:
                xpot = 1
                for j in range (pot):
                    xpot = int((xpot * x) %m)
                
                #print(x, pot, " = ", xpot)
                
                for j in range(abs(poly[i])):
                    if poly[i] > 0:
                        ans = int((ans + xpot) %m)
                    else:
                        ans = int((ans - xpot) %m)
                
                #print("ans: ", ans)
            
            pot += 1
                    
                
        return int(ans %m)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        poly = input().split()
        for i in range(n):
            poly[i] = int(poly[i])
        x = int(input())
        
        ob = Solution()
        print(ob.value(n, poly, x))
# } Driver Code Ends