#User function Template for python3

class Solution:
      
    def firstNonRepeating(self, arr, n): 
        # Complete the function
        mappa = {};
        
        ans = 0;
        
        for i in range(n-1, -1, -1):
            if arr[i] not in mappa:
                ans = arr[i];
            
            mappa[arr[i]] = None;
        
        return ans;
        
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3

from collections import defaultdict 
            
for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.firstNonRepeating(arr, n))
    

# } Driver Code Ends