#User function Template for python3

class Solution:
    def count (self, N):
        # code here
        ans = 0
        
        for i in range(1, N+1):
            cont3 = True
            
            temp = i
            
            while temp > 0:
                if temp % 10 == 3:
                    cont3 = False
                    break
                temp //= 10
            
            
            if cont3 == True:
                ans += 1
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Position this line where user code will be pasted.
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ob = Solution()
        print(ob.count(N))

# } Driver Code Ends