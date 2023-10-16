#User function Template for python3
class Solution:
    def inc (self, B, N):
        # code here
        l = len(N)
        
        dec = 0
        
        pot = 0
        for i in range(l-1, -1, -1):
            digit = 0
            if ord(N[i]) >= ord("0") and ord(N[i]) <= ord("9"):
                digit = int(N[i])
            else:
                if N[i] == "A":
                    digit = 10
                elif N[i] == "B":
                    digit = 11
                elif N[i] == "C":
                    digit = 12
                elif N[i] == "D":
                    digit = 13
                elif N[i] == "E":
                    digit = 14
                elif N[i] == "F":
                    digit = 15
                
            dec += digit * pow(B, pot)
            pot += 1
            
        #print(dec)
        
        dec += 1
        
        ans = ""
        
        while dec > 0:
            if dec % B <= 9:
                ans = str(dec % B) + ans
            else:
                digit = ""
                if dec % B == 10:
                    digit = "A"
                elif dec %B == 11:
                    digit = "B"
                elif dec %B == 12:
                    digit = "C"
                elif dec %B == 13:
                    digit = "D"
                elif dec %B == 14:
                    digit = "E"
                elif dec %B == 15:
                    digit = "F"
                
                ans = digit + ans
            
            dec //= B
    
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        B = int(input())
        N = input()
        ob = Solution()
        print(ob.inc(B, N))
# } Driver Code Ends