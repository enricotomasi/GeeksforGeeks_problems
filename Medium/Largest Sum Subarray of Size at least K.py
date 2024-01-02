#User function Template for python3
import sys

class Solution():
    def maxSumWithK(self, a, n, k):
        # Code here
        ans = sys.maxsize * - 1
        tot = 0
        m = 0
        
        for i in range(n):
            tot += a[i]
            
            if i >= k:
                tot -= a[i - k]
                m = max(0, a[i - k], (a[i - k] + m))
            
            if i >= k - 1:
                ans = max(ans, (tot + m))
        
        return ans
    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        k = int(input())
        
        ob = Solution()
        print(ob.maxSumWithK(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends
