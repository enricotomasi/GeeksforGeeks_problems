#User function Template for python3
import math as m 

class Solution:
    # function to find the minimum element 
    
    # Let, x^n = a1 * a2 * a3 * a4 *....* an
    # we have been given n and value of a1, a2, a3, ..., an.
    # Now take log on both sides with base e

    # n*logex > loge(a1) + loge(a2) +......+ loge(an)
    # Lets sum = loge(a1) + loge(a2) + ...... + loge(an)
    # n*loge x > sum
    # loge x > sum/n
    # Then take antilog on both side
    # x > e^(sum/n) 
    
    
    def findMin(self, a, n): 

        somma = 0
        for i in range(n): 
            somma += m.log(a[i]) 
          
        temp = m.exp(somma / n) 
          
        return int(temp + 1)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

    
for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    v = ob.findMin(arr, n)
    print(v)
    

# } Driver Code Ends