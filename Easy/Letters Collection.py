#User function Template for python3

class Solution:
    def matrixSum(self, n, m, mat, q, queries):
        # code here
        ans = []
        
        for it in queries:
            i = it[1]
            j = it[2]
            
            if it[0] == 1:
                temp = 0
                
                if i-1 >= 0 and j-1 >= 0: 
                    temp += mat[i-1][j-1]
                
                if i-1 >= 0:
                    temp += mat[i-1][j]
                
                if i-1 >= 0 and j+1 < m:
                    temp += mat[i-1][j+1]
                    
                if j+1 < m:
                    temp += mat[i][j+1]
                    
                if j-1 >= 0:
                    temp += mat[i][j-1]
                
                if i+1 < n and j-1 >= 0:
                    temp += mat[i+1][j-1]
                
                if i+1 < n:
                    temp += mat[i+1][j]
                
                if i+1 <n and j+1 <m:
                    temp += mat[i+1][j+1]
                
                ans += [temp]
                
            else:
                temp = 0
                if i-2 >= 0:
                    temp += mat[i-2][j]

                if i-2 >= 0 and j-1 >= 0:
                    temp += mat[i-2][j-1]

                if i-2 >= 0 and j-2 >= 0:
                    temp += mat[i-2][j-2]

                if i-2 >= 0 and j+1 < m:
                    temp += mat[i-2][j+1]

                if i-2 >= 0 and j+2 < m:
                    temp += mat[i-2][j+2]

                    
                if j-2 >= 0:
                    temp += mat[i][j-2]

                if i-1 >= 0 and j-2 >= 0:
                    temp += mat[i-1][j-2]

                if i+1 < n and j-2 >= 0:
                    temp += mat[i+1][j-2]

                if i+2 < n and j-2 >= 0:
                    temp += mat[i+2][j-2] 

                
                if i+2 < n:
                    temp += mat[i+2][j]

                if i+2 < n and j-1 >= 0:
                    temp += mat[i+2][j-1]

                if i+2 < n and j+1 < m:
                    temp += mat[i+2][j+1]

                if i+2 < n and j+2 < m:
                    temp += mat[i+2][j+2]

                
                if j+2 < m:
                    temp += mat[i][j+2]

                if i-1 >=0 and j+2 < m:
                    temp += mat[i-1][j+2]

                if i+1 <n and j+2 < m:
                    temp += mat[i+1][j+2]

                ans += [temp];
                    
                    
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m = [int(x) for x in input().split()]
        mat = [[0]*m for x in range(n)]
        for i in range(n):
            arr = input().split()
            for j in range(m):
                mat[i][j] = int(arr[j])
        q = int(input())
        queries = [[0]*3 for x in range(q)]
        for i in range(q):
            a = input().split()
            for j in range(3):
                queries[i][j] = int(a[j])
        
        ob = Solution()
        ans = ob.matrixSum(n, m, mat, q, queries)
        for i in range(q):
            print(ans[i])
# } Driver Code Ends