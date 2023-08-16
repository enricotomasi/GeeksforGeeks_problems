#User function Template for python3

def Max_Sum(arr, n, k):
    
    '''
    arr: given array
    n: size of array
    k:  as described in problem
    
    return: pair of ans
    '''
    
    arr.sort()
    ans = [0, 0]
    m = 0
    
    inizio = 0
    fine = n-1
    
    while inizio < fine:
        somma = arr[inizio] + arr[fine]
        if somma < k:
            if somma > m:
                ans = [arr[inizio], arr[fine]]
            m = max(m, somma)
            inizio +=1
        else:
            fine -=1
    
    return ans
    
            

#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    t=int(input())
    
    for tcs in range(t):
        
        n,k=[int(x) for x in input().split()]
        arr=[int(x) for x in input().split()]
        ans=Max_Sum(arr,n,k)
        print(ans[0],ans[1])
# } Driver Code Ends