#User function Template for python3

class Solution:
        
    def minSwap (self, arr, n, k) : 

        c = 0
        
        for it in arr:
            if it <= k:
                c += 1
        
        start = 0
        end = 0
        
        temp = 0
        m = 0

        while end < n:
            if arr[end] <= k:
                temp += 1

            if end - start + 1 > c:
                if arr[start] <= k:
                    temp -= 1
                start += 1

            m = max(m, temp)
            end += 1


        return  c - m





#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    k = int(input())
    ob=Solution()
    ans = ob.minSwap(arr, n, k)
    print(ans)
    





# } Driver Code Ends
