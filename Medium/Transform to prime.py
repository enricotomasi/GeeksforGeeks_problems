#User function Template for python3
import math


class Solution:
    def minNumber(self, arr ,n):
        # code here
        def prime(n):
            for i in range(2, int(math.sqrt(n)) + 1):
                if n % i == 0:
                    return False
            return True
        
        sum = 0
        for it in arr:
            sum += it
            
        #print(f"sum: {sum}")
        #print(f"prime test: {prime(1051)}")
        
        ans = 0
        
        while True:
            if prime(sum) == True:
                return ans
            sum += 1
            ans += 1
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
 #    l=list(map(int,input().split()))
 #    n=l[0]
 #    m=l[1]
    a=list(map(int,input().split()))
   # k = int(input())
  #  b = list(map(int, input().split()))
    ob = Solution()
    ans=ob.minNumber(a,n)
    print(ans)

# } Driver Code Ends