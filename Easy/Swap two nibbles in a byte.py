#User function Template for python3
class Solution:
    def swapNibbles (self, n):
        # code here 
        bin = ""
        
        while n > 0:
            if n % 2 == 1:
                bin = '1' + bin
            else:
                bin = '0' + bin
            
            n //= 2
        
        while len(bin) < 8:
            bin = '0' + bin
        
        rev = bin[4:] + bin[0:4]
        
        #print(rev)
        
        ans = 0
        
        p = 7
        
        for i in range(8):
            if rev[i] == '1':
                ans += pow(2, p)
                #print(ans, i, pow(2, i))
            p -= 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        print(ob.swapNibbles(n))

# } Driver Code Ends
