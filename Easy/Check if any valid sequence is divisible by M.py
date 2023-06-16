#User function Template for python3

def validSequence (arr, n, m) : 

    #Complete the function
    dp = []
    
    for i in range(n+1):
        dp.append([-1] * (m))

    def recur(pos, arr, n, m, temp):
        if pos == n:
            if temp == 0:
                return True
            else:
                return False
        
        if dp[pos][temp] != -1:
            return dp[pos][temp]

        val1 = recur(pos+1, arr, n, m, (temp + arr[pos]) %m)
        val2 = recur(pos+1, arr, n, m, (temp - arr[pos]) %m)

        dp[pos][temp] = val1 or val2 

        return dp[pos][temp]

    

    return recur(0, arr, n, m, 0)




#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    m = int(input())
    ans = validSequence(arr, n, m)
    if(ans == True):
        print(1)
    else:
        print(0)




# } Driver Code Ends