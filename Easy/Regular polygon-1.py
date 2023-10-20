#User function Template for python3

class Solution:
    def isPolygonPossible(self, arr, N) :
        #code here
        if N < 3:
            return -1
        
        for i in range(1, (N // 3)+1):
            for j in range(N):
                if arr[j] == 1:
                    temp = j
                    while temp < j + N:
                        if arr[temp % N] != 1:
                            break
                        temp += i
                    if temp == j + N:
                        return 1
        
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    ob = Solution()
    print(ob.isPolygonPossible(a, n))
# } Driver Code Ends