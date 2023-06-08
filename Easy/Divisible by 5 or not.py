#User function Template for python3


class Solution:

    def isDivisibleBy5(self, Bin):
        # code here
        n = len(Bin)
        pot = n -1
        
        numero = int(Bin, 2)
        
        #print (numero)
        
        if numero % 5 == 0:
            return "Yes"
            
        return "No"


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Bin = input()

        solObj = Solution()

        print(solObj.isDivisibleBy5(Bin))
# } Driver Code Ends