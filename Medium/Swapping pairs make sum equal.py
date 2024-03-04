class Solution:
    def findSwapValues(self, a, n, b, m):
        # Your code goes here
        a.sort()
        b.sort()
        
        ssa = set(a)
        ssb = set(b)
        
        sa = sum(a)
        sb = sum(b)
        
        #print(f"a: {a} ssa: {ssa} sum: {sa}")
        #print(f"b: {b} ssb: {ssb} sum: {sb}")
        
        for ita in ssa:
            for itb in ssb:
                tsa = sa - ita + itb
                
                tsb = sb - itb + ita
                
                if tsa == tsb:
                    return 1
                
        return -1


#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    
    t=int(input())
    for _ in range(0,t):
        l=list(map(int,input().split()))
        n=l[0]
        m=l[1]
        a = list(map(int,input().split()))
        b = list(map(int, input().split()))
        ob = Solution()
        print(ob.findSwapValues(a,n,b,m))
# } Driver Code Ends
