#User function Template for python3

class Solution:
    def sumExists(self, arr, n, Sum):
        # code here
        for i in range(n):
            for j in range(n):
                if (i == j):
                    continue
                #print(arr[i], arr[j], arr[i] + arr[j], Sum)
                if arr[i] + arr[j] == Sum:
                    return 1
        
        return 0
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        su=int(input())
        ob = Solution()
        ans = ob.sumExists(arr, n, su)
        print(ans)
        tc -= 1
# } Driver Code Ends