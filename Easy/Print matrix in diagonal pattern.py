# Your task is to complete this function
'''
    Create variables i=0, j=0 to store the current indices of row and column
    Run a loop from 0 to n*n, where n is side of the matrix.
    
    Use a flag isUp to decide whether the direction is upwards or downwards. 
    
    Set isUp = true initially the direction is going upward.
    
    If isUp = 1 then start printing elements by incrementing column index and decrementing the row index.
    
    Similarly if isUp = 0, then decrement the column index and increment the row index.
    
    Move to the next column or row (next starting row and column
    
    Do this till all the elements get traversed.
'''

class Solution:
    def matrixDiagonally(self, mat):
        # code here
        n = len(mat)
        
        ans  = [mat[0][0]]
        flag = True
        
        for i in range(1, (n * 2) - 1):
            for j in range(max(0, i + 1 - n), min(i + 1, n)):
                if flag:
                    ans.append(mat[j][i - j])
                else: 
                    ans.append(mat[i - j][j])
            
            flag = not flag
        
        return ans
        
        


#{ 
 # Driver Code Starts
# Driver Program
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n[0])]for j in range(n[0])]
        k=0
        for i in range(n[0]):
            for j in range(n[0]):
                matrix[i][j] = arr[k]
                k+=1
        a = Solution().matrixDiagonally(matrix)
        for x in a:
            print(x,end=' ')
        print('')
# Contributed by: Harshit Sidhwa
# } Driver Code Ends
