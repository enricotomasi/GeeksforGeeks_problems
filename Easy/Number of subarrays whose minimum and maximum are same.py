#User function Template for python3

class Solution:
    def numberOfways(self, a, n): 
        # Coplete the function
        somma = n
        conta = 0
        
        t = 0
        temp0 = a[0]
        temp1 = a[0]
        
        for i in range(1, n):
            temp0 = max(temp0, a[i])
            temp1 = min(temp1, a[i])
            
            if temp0 == temp1:
                conta += i - t
            else:
                temp0 = a[i]
                temp1 = a[i]
                t = i
        
        return conta + somma
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    print(ob.numberOfways(arr, n))
    
# } Driver Code Ends