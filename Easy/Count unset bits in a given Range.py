#User function Template for python3

class Solution:
    def countUnsetBits(self, n, l, r):
        # code here
        b = ""
        
        while n > 0:
            b += str(n % 2)
            n //= 2
        
        #print(b)
        
        ll = len(b)
        ans = 0
        
        for i in range(l-1, r):
            #print(i, end = " ")
            #if i < ll:
            #print(b[i])
            if b[i] == "0":
                ans +=1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n,l,r=map(int,input().split())
        
        ob = Solution()
        print(ob.countUnsetBits(n,l,r))
# } Driver Code Ends