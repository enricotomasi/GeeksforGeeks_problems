#User function Template for python3

class Solution:
    
    def fill(self, n, m, mat):
        # code here
        def rec(mat, i, j, n, m, temp):
            if temp[i][j] == -1:
                return
            
            temp[i][j] = -1
            
            if i + 1 >= 0 and i + 1 < n and j >= 0 and j < m and mat[i + 1][j] == 'O':
                rec(mat, i + 1, j, n, m, temp)
            
            if i - 1 >= 0 and i - 1 < n and j >= 0 and j < m and mat[i - 1][j] == 'O':
                rec(mat, i - 1, j, n, m, temp)
            
            if i >= 0 and i < n and j + 1 >= 0 and j + 1< m and mat[i][j + 1] == 'O':
                rec(mat, i, j + 1,n, m, temp)
    
            if i >= 0 and i < n and j - 1 >= 0 and j - 1 < m and mat[i][j - 1] == 'O':
                rec(mat, i, j - 1, n, m, temp)
            
        temp = [[1 for i in range(m)] for j in range(n)]
        

        for j in range(m):
            if mat[0][j] == 'O':
                rec(mat, 0, j, n, m, temp)
        
        for j in range(n):
            if mat[j][0] == 'O':
                rec(mat, j, 0 ,n, m, temp)
        
        for j in range(m):
            if mat[n - 1][j] == 'O':
                rec(mat, n - 1, j, n, m, temp)
        
        for j in range(n):
            if mat[j][m - 1] =='O':
                rec(mat, j, m - 1, n, m, temp)
                    
        
        for i in range(n):
            for j in range(m):
                if mat[i][j] == 'O' and temp[i][j] == 1:
                    mat[i][j] = 'X'
                    
        return mat


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m = [int(x) for x in input().split()]
        mat = []
        for i in range(n):
            s = list(map(str,input().split()))
            mat.append(s)
        
        ob = Solution()
        ans = ob.fill(n, m, mat)
        for i in range(n):
            for j in range(m):
                print(ans[i][j], end = " ")
            print()
# } Driver Code Ends
