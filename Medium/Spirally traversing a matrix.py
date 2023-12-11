#User function Template for python3

class Solution:
    
    #Function to return a list of integers denoting spiral traversal of matrix.
    def spirallyTraverse(self, matrix, r, c): 
        # code here 
        
        l = 0
        t = 0
        
        rr = c - 1
        b = r - 1
        
        d = 0
        
        ans = []

        while l <= rr and t <= b:
            if d == 0:
                for i in range(l, rr + 1):
                    ans.append(matrix[t][i])
                t += 1
                d = 1

            elif d == 1:
                for i in range(t, b + 1):
                    ans.append(matrix[i][rr])
                rr -= 1
                d = 2

            elif d == 2:
                for i in range(rr, l - 1, -1):
                    ans.append(matrix[b][i])
                b -= 1
                d = 3

            elif d == 3:
                for i in range(b, t - 1, -1):
                    ans.append(matrix[i][l])
                l += 1
                d = 0

        return ans





#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        r,c = map(int, input().strip().split())
        values = list(map(int, input().strip().split()))
        k = 0
        matrix =[]
        for i in range(r):
            row=[]
            for j in range(c):
                row.append(values[k])
                k+=1
            matrix.append(row)
        obj = Solution()
        ans = obj.spirallyTraverse(matrix,r,c)
        for i in ans:
            print(i,end=" ")
        print()

# } Driver Code Ends