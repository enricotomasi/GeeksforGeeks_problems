#User function Template for python3

class Solution:
    def antiDiagonalPattern(self, matrix):
        # Code here
        n = len(matrix)
        
        ans = []
        
        for i in range(n):
            a = 0
            b = i
            
            while a <= (n-1) and b >= 0:
                #print(a, b)
                ans += [matrix[a][b]]
                a += 1
                b -= 1
            
        for i in range(1, n):
            a = i
            b = n - 1
            
            while a <= (n-1) and b >= 0:
                #print(a, b)
                ans += [matrix[a][b]]
                a += 1
                b -= 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input()) 
        inp=list(map(int,input().split()))
        matrix=[]
        k = 0
        for i in range(n):
            row = []
            for j in range(n):
                row.append(inp[k])
                k += 1
            matrix.append(row)
        ob = Solution()
        ans = ob.antiDiagonalPattern(matrix)
        for i in ans:
            print(i,end=" ")
        print()


# } Driver Code Ends
