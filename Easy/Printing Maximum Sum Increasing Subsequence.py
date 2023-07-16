#User function Template for python3

class Solution:
    def maxSumSequence(self, N, A):
        # code here
        dp = [A[i] for i in range(N)]
        mappa = [i for i in range(N)]
        massimo = 0
        
        for i in range(N):
            for j in range(i):
                if A[j] < A[i] and dp[j] + A[i] > dp[i]:
                    dp[i] = dp[j] + A[i]
                    mappa[i] = j
                    
            massimo = max(massimo, dp[i])

        cont = {}

        for i in range(N):
            if dp[i] != massimo:
                continue
            
            temp = i
            arrtemp = []

            while True:
                arrtemp += [A[temp]]
                if temp == mappa[temp]:
                    break
                temp = mappa[temp]
            cont[temp] = arrtemp


        return sorted(cont[min(cont)])

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = input().split()
        for i in range(N):
            A[i] = int(A[i])
            
        ob = Solution()
        ans = ob.maxSumSequence(N, A)
        for itr in range(len(ans)):
            print(ans[itr],end=" ")
        print()
# } Driver Code Ends