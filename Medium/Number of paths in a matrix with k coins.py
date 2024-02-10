#User function Template for python3

class Solution:
    def numberOfPath (self, n, k, arr):
        # code here
        dp = []
        
        for i in range(n):
            t1 = []
            for j in range(n):
                t2 = []
                for k in range(k + 1):
                    t2.append(-1)
                t1.append(t2)
            dp.append(t1)
        
        def rec(i, j, temp):
            if i >= n or j >= n or temp > k:
                return 0
            
            if dp[i][j][temp] != -1:
                return dp[i][j][temp]
            
            if i == n - 1 and j == n - 1 and k == temp + arr[i][j]:
                return 1
    
            dp[i][j][temp] = rec(i + 1, j ,temp + arr[i][j]) + rec(i, j + 1 ,temp + arr[i][j])
            
            return dp[i][j][temp]
            
        return rec(0, 0, 0)
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        k= int(input())
        n=int(input())
        l = list(map(int, input().split()))
        arr = list()
        c=0
        for i in range(0, n):
            temp = list()
            for j in range(0, n):
                temp.append(l[c])
                c += 1
            arr.append(temp)
        ans = ob.numberOfPath(n, k, arr);
        print(ans)


# } Driver Code Ends