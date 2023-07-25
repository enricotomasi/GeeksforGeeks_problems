#User function Template for python3

class Solution:
    def isPossible(self, N, arr, K):
        # code here
        numeri = dict()

        for it in arr:
            if it in numeri:
                    numeri[it] += 1
            else:
                numeri[it] = 1
        
        for it in numeri:
            if numeri[it] > K*2:
                return 0
        
        return 1
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        K = int(input())

        ob = Solution()
        print(ob.isPossible(N, arr, K))

# } Driver Code Ends