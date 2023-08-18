#User function Template for python3
import sys

def minOps(a, n):
    ans = n
    
    for i in range(n-1, -1, -1):
        if a[i] == ans:
            ans -=1
    
    return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(minOps(a, n))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends