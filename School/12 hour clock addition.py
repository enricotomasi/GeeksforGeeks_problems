 
#User function Template for python3

class Solution:
    def clockSum(self, num1, num2):
        # code here
        
        if num1 >= 12:
            num1%=12
        
        if num2 >= 12:
            num2%=12
        
        somma = num1+num2
    
        if somma >= 12:
            somma-=12
        
        return somma;


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        num1, num2 = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.clockSum(num1, num2))

# } Driver Code Ends