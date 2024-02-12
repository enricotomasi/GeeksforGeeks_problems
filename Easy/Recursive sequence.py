#User function Template for python3

class Solution:
    def sequence(self, n):
        # code here
        m = 1000000007
        ans = 0
        
        temp = 1
        
        for i in range(1, n + 1):
            t = 1
            
            for j in range(i):
                #print(temp, end = " ")
                t = (t * temp) % m
                temp += 1
            
            #print("\n", t)
            ans = (ans + t) % m
        
        return ans % m

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.sequence(N))
# } Driver Code Ends
