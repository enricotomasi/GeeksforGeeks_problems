def subsetPairNotDivisibleByK(a, N, K):
    f = [0] * K;
    
    for i in range(N):
        f[a[i] % K] += 1
    
    if (K % 2 == 0):
        f[K//2] = min(f[K // 2], 1)
 
    ans = min(f[0], 1)
 
    for i in range(1, (K // 2) + 1):
        ans += max(f[K - i], f[i])
 
    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        print(subsetPairNotDivisibleByK(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()



    
# } Driver Code Ends