#User function Template for python3


#Function to modify the matrix such that if a matrix cell matrix[i][j]
#is 1 then all the cells in its ith row and jth column will become 1.
def booleanMatrix(matrix):
    # code here
    if matrix is None:
        return matrix
    
    rows = len(matrix)
    
    if rows == 0:
        return matrix
        
    cols = len(matrix[0])
    
    #print(f"rows: {rows}, cols: {cols}")
    
    cr = set()
    cc = set()
    
    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] == 1:
                cr.add(i)
                cc.add(j)

    #print(cr)
    #print(cc)

    for i in range(rows):
        for j in range(cols):
            
            if i in cr or j in cc:
                matrix[i][j] = 1
            else:
                matrix[i][j] = 0
    
    return matrix
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        r,c = map(int, input().strip().split())
        matrix = []
        for i in range(r):
            line = [int(x) for x in input().strip().split()]
            matrix.append(line)
        booleanMatrix(matrix)
        for i in range(r):
            for j in range(c):
                print(matrix[i][j], end=' ')
            print()


# } Driver Code Ends
