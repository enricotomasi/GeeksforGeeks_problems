
#User function Template for python3

class Solution:
    
    #Function for finding determinant of matrix.
    def determinantOfMatrix(self, matrix, n):
        # code here 
        if n == 1:
            return matrix[0][0]
        
        ans = 0
        
        for i in range(n):
            if matrix[0][i] == 0:
                continue
            
            temp = [[k[j] for j in range(n) if j != i] for k in matrix[1:]]
            
            t = matrix[0][i]
            
            if i % 2 != 0:
                t *= -1
            
            ans += t * self.determinantOfMatrix(temp, n - 1)
            
        return ans
            
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        values = list(map(int, input().strip().split()))
        k = 0
        matrix =[]
        for i in range(n):
            row=[]
            for j in range(n):
                row.append(values[k])
                k+=1
            matrix.append(row)
        obj = Solution()
        print(obj.determinantOfMatrix(matrix,n))
# } Driver Code Ends