#User function Template for python3
import math

def minMoves(a, n, k):
    m = 1000000007
    ans = 0
    
    last = a[0] 
    
    for i in range(1, n):
        el = a[i]
        #print(f"\n el: {el} - last: {last}")
    
        if el > last:
            diff = el - last
            #print(f" ----> diff: {diff}")
            
            fattore = math.ceil(diff / k)
            #print(f" ----> fattore: {fattore}")
            
            ans = (ans + fattore) % m
            el -= fattore * k
            
        #print(f"last: {last}")
        last = el
        
    return ans %m
    
#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, m = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        print(minMoves(a, n, m))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends