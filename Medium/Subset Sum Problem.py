#User function Template for python3

class Solution:
    def isSubsetSum (self, n, arr, sum):
        # code here
        arr.sort()
        
        dp = [[0 for i in range(sum + 1)] for i in range(n + 1)]
        
        for i in range(n + 1):
            dp[i][0] = 1

        for i in range(1, n + 1):
            for j in range(1, sum + 1):
                if dp[i - 1][j] == 1:
                    dp[i][j] = 1
                
                if j >= arr[i - 1] and dp[i - 1][j - arr[i - 1]] == 1:
                    dp[i][j] = 1
        
        #print(dp)
        
        if dp[n][sum] == 1:
            return True
        
        return False

        
        


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
        sum = int(input())

        ob = Solution()
        if ob.isSubsetSum(N,arr,sum)==True:
            print(1)
        else :
            print(0)
            
        

# } Driver Code Ends
