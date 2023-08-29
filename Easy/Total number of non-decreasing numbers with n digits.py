#User function Template for python3

class Solution:
    def count(self, N):
        # code here
        arr = [1] * 10
        
        for i in range(N-1):
            temp = arr[:]
            for j in range(1, 10):
                temp[j] += temp[j - 1]
            arr = temp[:]
        
        return sum(arr)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.count(N))
# } Driver Code Ends