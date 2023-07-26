#User function Template for python3
class Solution:
    def MinRemove(self, n, s): 
        # code here
        r = s[::-1]
        
        if r == s:
            #print("r == s")
            return 1
        
        zeri = False
        uni = False
        
        for it in s:
            if zeri == True and uni == True:
                return 2
            
            if it == "0":
                zeri = True
            else:
                uni = True
        
        if zeri == True and uni == True:
                return 2
        
        #print("Fine")
        return 1
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input().strip())
        s = input().strip()
        obj = Solution()
        print(obj.MinRemove(n,s))
# } Driver Code Ends