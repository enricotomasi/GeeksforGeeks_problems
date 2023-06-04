#User function Template for python3

class Solution:
    def countPairs(self, a, n, k): 
        # Complete the function
        ans = 0
        a.sort()
        
        i = 1
        j = 0
        
        while i<n:
            while (a[i] - a[j]) >= k:
                j += 1
            if (a[i] - a[j]) < k:
                ans += (i -j)
            i += 1
        
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n,k = map(int, input().strip().split())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    print(ob.countPairs(arr, n, k))


# } Driver Code Ends