#Your task is to complete this function
#Function should print the required output in one line
#donot print new Line
import math

def cfp(n):
    ans = 0
    while n % 2 == 0:
        ans += 1
        n //=2
    
    for i in range(3, int(math.sqrt(n))+1, 2):
        while n % i == 0:
            ans += 1
            n //= i
    
    if n > 2:
        ans +=1
        
    return ans

def printKAlmostPrimes(k, n):
    #Code here
    ans = []
    
    numero = 1
    conta = n
    while conta > 0:
        #print(numero, conta, cfp(numero))
        #print(numero, cfp(numero))
        if cfp(numero) == k:
            ans += [numero]
            conta -= 1
        
        numero += 1
    
    for it in ans:
        print(it, end = " ")
        
        
        

#{ 
 # Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        k,n = list(map(int, input().strip().split()))
        printKAlmostPrimes(k, n)
        print('')
# Contributed by: Harshit sidhwa
# } Driver Code Ends