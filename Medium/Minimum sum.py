#User function Template for python3

class Solution:
    def solve(self, arr, n):
        # code here
        if n == 1:
            return arr[0]
        
        arr.sort()
        
        first = ""
        second = ""
        
        i = 0
        
        while i < n:
            first += str(arr[i])
            
            if i < n - 1:
                second += str(arr[i + 1])
            i += 2
        
        f = int(first)
        s = int(second)
        
        return f + s
            

#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.solve(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends
