#User function Template for python3

def lucky (arr, n) : 
    #Complete the function
    temp = {}
    ans = 0
    
    for it in arr:
        t = it
        somma = 0

        while (t > 0):
            somma += int(t % 10)
            t //= 10
        
        #print(it, somma)
        
        if somma not in temp:
            #print("Bingo!")
            temp[somma] = somma
            ans += 1
    
    return ans
        
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    ans = lucky(arr, n)
    print(ans)
# } Driver Code Ends