#User function Template for python3

class Solution:
    def Pair_minimum (self, arr, n) : 
        #Complete the function
        arr.sort()
        start = 0
        end = len(arr) - 1
        ans = -1
        
        for i in range(n):
            temp = arr[start] + arr[end]
            ans = max(ans, temp)
            start += 1
            end   -= 1
            
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    res = ob.Pair_minimum(arr, n)
    print(res)


# } Driver Code Ends