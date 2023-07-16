#User function Template for python3


# return [[tanya's tasks], [manya's tasks]]
class Solution:
    def solve(self, arr, n, m):
        # code here
        mappa = dict()
        
        for it in arr:
            mappa[it] = 0    
        
        tanya = True
        
        t = []
        m = []
        
        for i in range(1, n+1):
            if i in mappa:
                continue
            
            if tanya == True:
                t += [i]
            else:
                m += [i]
            
            tanya = not tanya
        
        return [t, m]
#{ 
 # Driver Code Starts
#Initial Template for Python 3




if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, m = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))

        ans = Solution().solve(arr, n, m)
        for x in ans[0]:
            print(x, end=" ")
        print()
        for x in ans[1]:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends