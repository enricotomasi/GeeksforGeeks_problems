#User function Template for python3
import math 

def primo(n):
    if n == 1:
        return False
        
    if n == 2:
        return True
    
    if n % 2 == 0:
        return False
        
    for i in range(3, int(math.sqrt(n)) +1, 2):
        if n % i == 0:
            return False
    
    return True

def primeOccurences (arr, n, k) : 
    #Complete the function
    freq = dict()
    
    for it in arr:
        if it in freq:
            freq[it] += 1
        else:
            freq[it] = 1
    
    #print(freq)
    

    ans = []

    for it in freq:
        f = freq[it]
        if f >= k and primo(f):
            #print(f)
            ans += [it]
    
    if len(ans) == 0:
        return [-1]
    
    ans.sort()
    
    return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

    
    
for _ in range(0,int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().strip().split()))
    res = primeOccurences(arr, n, k)
    print(*res)






# } Driver Code Ends