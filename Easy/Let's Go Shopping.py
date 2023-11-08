#User function Template for python3
class Solution:
    def minimumItem (self, n):
        # code here 
        if n % 1000 != 0:
            return -1
        
        ob = 5000
        temp = 0
        ans = 0
        
        while n > 0:
            temp = n // ob
            if temp %2 == 0 and temp != 0:
                temp -=1
            
            n -= temp * ob
            
            temp = (temp // 2) + temp
            ob -= 1000
            
            ans += temp
    
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.minimumItem(n))
# } Driver Code Ends