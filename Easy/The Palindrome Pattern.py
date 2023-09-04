#User function Template for python3

class Solution:
    def pattern (self, a, N):
        # code here
        
        #rows
        for i in range(N):
            r = ""
            for j in range(N):
                r += str(a[i][j])
            
            rr = r[::-1]
            if r == rr:
                return str(i) + " R"
                
        #cols
        for i in range(N):
            c = ""
            for j in range(N):
                c += str(a[j][i])
            
            cr = c[::-1]
            if c == cr:
                return str(i) + " C"
                
        
        return "-1"
        
        
                
                



#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        N = int(input())
        L = list(map(int, input().split()))
        a = list()
        c = 0
        for i in range(0, N):
            X = list()
            for j in range(0, N):
                X.append(L[c])
                c += 1
            a.append(X)
        ans = ob.pattern(a, N);
        print(ans)




# } Driver Code Ends