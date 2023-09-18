#User function Template for python3

class Solution:
    def distributeGift(self, arr, n):
        # code here
        used = dict()
        ans = []
        
        for i in range(n):
            el = arr[i]
            for it in el:
                if it not in used:
                    used[it] = 0
                    ans += [it]
                    break
                
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        inputLine = list(map(int, input().strip().split()))
        arr = [[0 for j in range(n)] for i in range(n)]
        for i in range(n):
            for j in range(n):
                arr[i][j] = inputLine[i * n + j]
        ob = Solution()
        ans = ob.distributeGift(arr, n)
        for xx in ans:
            print(xx, end=" ")
        print()
        tc -= 1

# } Driver Code Ends