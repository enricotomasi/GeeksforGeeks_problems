#User function Template for python3

def findEqualPoint(arr, n):
    # Your code goes here
    if (n == 1):
        return 0;
        
    k = 1;
    
    for i in range(1, n):
        if (arr[i] != arr[i-1]):
            k += 1;
    
    if (k % 2 == 0):
        return -1;
    
    idx = (k + 1) // 2;
    
    k = 1;
    
    for i in range(1, n):
        if (arr[i] != arr[i-1]):
            k += 1;
        if (idx == k):
            return i;
    
    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        print( findEqualPoint(arr, n) )

        T -= 1


if __name__ == "__main__":
    main()
    
# } Driver Code Ends