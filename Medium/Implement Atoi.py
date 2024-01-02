#User function template for Python

class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self, string):
        # Code here
        n = len(string)
        ans = 0
        
        mul = 1
        
        negative = False
        
        for i in range(n - 1, -1, -1):
            if i == 0 and string[i] == "-":
                negative = True
                continue
            
            d = ord(string[i])
            
            if d < ord("0") or d > ord("9"):
                return -1
            
            digit = d - ord("0")
            a =  digit * mul
            #print(f"i: {i} digit: {digit}, a: {a}, mul: {mul}")
            ans += a
            mul *= 10 
           
        if negative:
            return ans * - 1
        
        return ans
            


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        string = input().strip();
        ob=Solution()
        print(ob.atoi(string))
# } Driver Code Ends
