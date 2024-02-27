#User function Template for python3

class Solution:
    def game_with_number (self, arr,  n) : 
        #Complete the function
        if n < 1:
            return arr
        
        last = arr[0]
        
        for i in range(n - 1):
            new = arr[i] | arr[i + 1]
            last = arr[i]
            
            arr[i] = new
        
        return arr


#{ 
 # Driver Code Starts

#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    res = ob.game_with_number(arr, n);
    print(*res)




# } Driver Code Ends
