#User function Template for python3

 #Your task is to complete this Function \

class Solution:
    #function should return True/False
    def isInterleave(self, A, B, C):
        # Code here
        m = {}
        
        if len(A) + len(B) != len(C):
            return False
        
        def rec(i, j):
            if i == len(A) and j == len(B):
                return True
                
            if (i, j) in m:
                return m[(i, j)]
                
            if i < len(A) and A[i] == C[i + j] and rec(i + 1, j):
                return True
                
            if j < len(B) and B [j] == C[i + j] and rec(i, j + 1):
                return True
                
            m[(i, j)] = False
            
            return False
        
        return rec(0, 0)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        arr=input().strip().split()
        if Solution().isInterleave(arr[0], arr[1], arr[2]):
            print(1)
        else:
            print(0)
# contributed By: Harshit Sidhwa
# } Driver Code Ends
