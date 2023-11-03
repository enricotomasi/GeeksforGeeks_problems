#User function Template for python3
class Solution:
    def checkSorted(self, N, A): 
        #code here
        diff = 0
        
        for i in range(N):
            if A[i] != i+1:
                diff += 1
                
        if diff == 0 or diff == 3:
            return True
        
        if diff == 1:
            return False
        
        if diff == 2:
            return False
            
        
        if diff == 4:
            for i in range(N):
                if A[i] != i + 1:
                    temp = A[i]
                    A[i] = A[temp - 1]
                    A[temp - 1] = temp
                    break
            
            for i in range(N):
                if A[i] != i + 1:
                    temp = A[i]
                    A[i] = A[temp - 1]
                    A[temp - 1] = temp
                    break
            diff = 0
        
            for i in range(N):
                if A[i] != i+1:
                    diff += 1
            
            if diff == 0:
                return True
        
        
        return False
                
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.checkSorted(N, A)
        if ans:
            print("Yes")
        else:
            print("No")
# } Driver Code Ends