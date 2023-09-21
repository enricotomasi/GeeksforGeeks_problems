#User function Template for python3

class Solution:
    def EqualSum(self, a, n):
        #Complete the function
        if n == 1:
            return [a[0], 2, 2]
        
        
        sx = [0] * n
        dx = [0] * n
        
        tot = 0
        for i in range(n):
            tot += a[i]
            sx[i] = tot
        
        tot = 0
        for i in range(n-1, -1, -1):
            tot += a[i]
            dx[i] = tot
            
        #print(f"sx: {sx}")
        #print(f"dx: {dx}")
        
        val = 100000000
        pos = -1
        a = -1
        
        for i in range(n-1):
            diff = abs(sx[i] - dx[i+1])

            #print(f"sx: {sx[i]} dx: {dx[i+1]} diff: {diff}")
            
            if diff < val:
                val = diff
                pos = i + 2
                
                if sx[i] > dx[i+1]:
                    a = 2
                else:
                    a = 1

        
        return [val, pos, a]
#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    v = ob.EqualSum(arr, n)
    print(str(v[0]) + " " + str(v[1]) + " " + str(v[2]))
    
    
# } Driver Code Ends