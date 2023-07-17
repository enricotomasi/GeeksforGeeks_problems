#User function Template for python3

def countPairs(a, n):
    a.sort()
    massimo = a[n-1]
    minimo = a[0]
    
    nm = 0
    nn = 0
    
    for it in a:
        if it == massimo:
            nm +=1
        elif it == minimo:
            nn +=1
    
    return nm * nn
       

#{ 
 # Driver Code Starts
#Initial Template for Python 3



t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    ans=countPairs(a,n)
    print(ans)
    



# } Driver Code Ends