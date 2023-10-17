#User function Template for python3
import math

class Solution:
    def palPrimes(self, n):
        # code here
        ul = 1000001
        
        sieve = [True] * ul
        
        for i in range(2, int(math.sqrt(n)) + 1):
            if sieve[i] == True:
                for j in range(i*i, ul, i):
                    sieve[j] = False
        
        ans = 0
        
        for i in range(2, n+1):
            #print(i, sieve[i])
            if sieve[i] == True:
                #print("primo:", i)
                str1 = str(i)
                str2 = str1[::-1]
                
                if str1 == str2:
                    #print("     primopalindrono:", i)
                    ans += 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        ob = Solution()
        print(ob.palPrimes(n))
# } Driver Code Ends