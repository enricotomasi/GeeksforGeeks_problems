#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    def count_NGEs(self, N, arr, queries, indices):
        # Code here
        ans = []
        
        for i in range(queries):
            nge = 0
            el = arr[indices[i]]
            
            for j in range (indices[i] + 1, N):
                if arr[j] > el:
                    nge += 1
            
            ans += [nge]
        
        return ans
        
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        N = int(input())
        arr = list(map(int, input().split()))
        queries = int(input())
        indices = list(map(int, input().split()))
        ob = Solution()
        NGEs = ob.count_NGEs(N, arr, queries, indices)
        for val in NGEs:
            print(val, end = ' ')
        print()
# } Driver Code Ends