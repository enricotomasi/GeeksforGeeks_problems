#User function Template for python3

class Solution:
    def findSingle(self, n, arr):
        # code here
        m = {};
        
        for it in arr:
            if it in m:
                m[it] += 1
            else:
                m[it] = 1
        
        for it in m:
            if m[it] % 2 != 0:
                return it
        
        return -1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        
        ob = Solution()
        print(ob.findSingle(N, arr))

# } Driver Code Ends
