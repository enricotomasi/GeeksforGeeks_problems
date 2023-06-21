#User function Template for python3
class Solution:
    def nextSparse (ob, n):
        # code here 
        
        while (True):
            last = -1;
            temp = n;
            bono = True;
            
            #b = "";
            while (temp > 0):
                digit = temp % 2;
                
                if (last == 1 and digit == 1):
                    bono = False;
                    break;
            
                #b += str(digit);
                
                last = digit;
                temp //= 2;
            
            #print(n, b);
            if (bono == True):
                return n;
            
            n += 1;
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.nextSparse(n))
# } Driver Code Ends