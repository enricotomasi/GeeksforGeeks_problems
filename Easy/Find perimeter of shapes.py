# Your task is to complete this function
# Function should return an integer
def findPerimeter(arr, n, m):
    # code here
    ans = 0
    
    for i in range(n):
        for j in range (m):
            if arr[i][j] == 1:
                if (i <= 0) or (i > 0 and arr[i-1][j] == 0):
                    ans +=1
                if (j <= 0) or (j > 0 and arr[i][j-1] == 0):
                    ans +=1
                if (i >= n-1) or (i < n-1 and arr[i+1][j] == 0):
                    ans += 1;
                if (j >= m-1) or (j < m-1 and arr[i][j+1] == 0):
                    ans += 1
    return ans

#{ 
 # Driver Code Starts
# Driver Program
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n[1])]for j in range(n[0])]
        k=0
        for i in range(n[0]):
            for j in range(n[1]):
                matrix[i][j] = arr[k]
                k+=1
        print(findPerimeter(matrix, n[0], n[1]))
# Contributed by: Harshit Sidhwa

# } Driver Code Ends