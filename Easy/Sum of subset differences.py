#Your task is to complete this function
#Your function should return desired Answer

def sumDiff(S, n):
    #Code here
    n = len(arr)
    
    left = 0
    for i in range(n):
        left += arr[i] * 2 ** (n-i-1)
        
    right = 0
    for i in range(n):
        right += arr[i] * 2 ** i
    
    return right - left

#{ 
 # Driver Code Starts
#Your Code goes here
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int, input().strip().split()))
        print(sumDiff(arr, n))
# Contributed By: Harshit Sidhwa
# } Driver Code Ends