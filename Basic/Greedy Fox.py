#User function Template for python3


def largestSum(arr, N):
    last = -1
    maxsomma = 0
    somma = 0
    
    
    for it in arr:
        if  it <= last:
           maxsomma = max(maxsomma, somma)
           somma = it
        else:
            somma += it
        
        last = it
        
    return max(maxsomma, somma)


#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    N=int(input())
    arr=list(map(int,input().split()))
    print(largestSum(arr,N))




# } Driver Code Ends