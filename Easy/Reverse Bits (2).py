#User function Template for python3

class Solution:
    def reversedBits(self, x):
        # code here 
        strbin = ""
        
        while x > 0:
            strbin += str(x % 2);
            x //= 2;
        
        #print(strbin)
            
        for i in range(32 - len(strbin)):
            strbin += "0"
        
        #print(strbin)
        
        ans = 0
        
        for i in range(32):
            digit = ord(strbin[i]) - ord("0");
            p = 31 - i
            
            #print(f"digit: {digit}")
            #print(f"p: {p}")
            
            if digit == 1:
                ans += 2 ** p
                #print(ans)
        
        return ans
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.reversedBits(X))
# } Driver Code Ends