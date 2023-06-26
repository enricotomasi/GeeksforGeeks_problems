#User function Template for python3

class Solution:
    def sortingCost(self, N, arr):
        # code here
        a = [0] * (N+1);
        
        m = 0;
        
        for i in range(N):
            if (a[arr[i]-1] >= 1):
                a[arr[i]] = a[arr[i]-1];
            a[arr[i]] += 1;
            m = max(m, a[arr[i]]);
        
        return N-m;
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for it in range(N):
            arr[it] = int(arr[it])
        
        ob = Solution()
        print(ob.sortingCost(N, arr))
# } Driver Code Ends