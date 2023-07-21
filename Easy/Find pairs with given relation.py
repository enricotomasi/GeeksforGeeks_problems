#User function Template for python3

class Solution:
    def findPairs(self, a, n):
        #code here.
        coppie = []
        
        for i in range(n):
            for j in range (i+1, n):
                prod = a[i] * a[j]
                if prod in coppie:
                    return 1
                coppie += [prod]
     
        
        return -1
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a = list(map(int,input().split()))
    ob = Solution()
    ans=ob.findPairs(a,n)
    print(ans)

# } Driver Code Ends