#User function Template for python3

class Solution:
    # Function to find the number 
    # of maximum pair sums 
    
    # hint:
    # If we take a closer look, we can notice following facts.

    # Maximum element is always part of solution
    # If maximum element appears more than once, then result is maxCount * (maxCount – 1)/2. 
    # We basically need to choose 2 elements from maxCount (maxCountC2).
    #
    # If maximum element appears once, then result is equal to count of second maximum element. 
    # We can form a pair with every second max and max
    
    def MaximumSum(self, a, n): 
      
        # Complete the function
        massimo = -1

        for i in range(n):
            massimo = max(massimo, a[i])
            
        #print ("Massimo: ", massimo)
            
        massimoConta = 0;
        
        for i in range(n):
            if a[i] == massimo:
                massimoConta += 1;
        
        #print ("MassimoConta: " , massimoConta)
        
        if massimoConta != 1:
            return int(massimoConta * (massimoConta -1) / 2)
            
        massimoConta = 0
        massimo2 = -1
        
        for i in range(n):
            if massimo2 < a[i] and a[i] != massimo:
                massimo2 = a[i]
        
        #print ("Massimo2", massimo2)
        
        for i in range(n):
            if a[i] == massimo2:
                massimoConta += 1
        
        #print ("MassimoConta: " , massimoConta)
        
        return massimoConta
        
    
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    v = ob.MaximumSum(arr, n)
    print(v)
    
# } Driver Code Ends