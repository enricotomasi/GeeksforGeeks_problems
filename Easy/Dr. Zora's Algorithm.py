#User function Template for python3
class Solution:
    def isDestructive (self, year):
        # code here
        
        temp = year
        resto = 0
        somma = 0
        
        while temp > 0:
            resto = temp % 10
            somma += resto
            temp //= 10
        
        ultimo = year % 100
        
        if somma %2 != 0 and ultimo % 6 == 0:
            return "Destructive Year"
        
        return "Non-Destructive Year"


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        year = int(input())
        
        ob = Solution()
        print(ob.isDestructive(year))
# } Driver Code Ends