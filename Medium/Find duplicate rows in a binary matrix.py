#User function Template for python3

class Solution:
    def repeatedRows(self, arr, m, n):
        #code here
        d = {}
        ans = []
        
        for i in range(m):
            s = ""
            
            for j in range(n):
                s += str(arr[i][j])

            if len(d) > 0 and s in d:
                ans += [i]
            
            d[s] = 0
           
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        
        arr = []
        for i in range(n):
            nums = list(map(int, input().strip().split()))
            arr.append(nums)
        ob = Solution()
        ans = ob.repeatedRows(arr, n, m)
        
        for x in ans:
            print(x, end=" ")
            
        print()
        tc -= 1

# } Driver Code Ends