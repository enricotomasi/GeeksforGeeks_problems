# User function Template for Python3

class Solution:
    def equalPartition(self, N, arr):
        # code here
        if N == 1:
            return 0
        
        sum = 0
        
        for it in arr:
            sum += it
        
        #print(f"Sum: {sum}")
        
        if sum % 2 != 0:
            return 0
        
        target = sum // 2
        
        #print(f"Target: {target}")
        
        dp = [1 if i == 0 else 0 for i in range(target + 1)]
        
        for it in arr:
            arc = set()
            for j in range(it, target + 1):
                if dp[j] == 0 and dp[j - it] and (j - it) not in arc:
                    dp[j] = 1
                    arc.add(j)
                if dp[target]:
                    return 1
        return 0
         
        
        
#{ 
 # Driver Code Starts
# Initial Template for Python3

import sys
input = sys.stdin.readline
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for it in range(N):
            arr[it] = int(arr[it])
        
        ob = Solution()
        if (ob.equalPartition(N, arr) == 1):
            print("YES")
        else:
            print("NO")
# } Driver Code Ends