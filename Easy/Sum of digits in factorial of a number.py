import math

def findSumOfDigits(n):
    # add code here
    fatt = math.factorial(n)
    
    ans = 0
    
    while fatt > 0:
        ans += fatt % 10
        fatt //= 10
    
    print(ans)


#{ 
 # Driver Code Starts

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        findSumOfDigits(n)
# } Driver Code Ends