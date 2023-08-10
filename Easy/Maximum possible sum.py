class Solution:
    def returnMaxSum(self, a, b, n):
        # Your code goes here
        
        # An efficient solution is to use hashing.

        # Create an empty hash table.
        # Traverse array elements. Do following for every element A[i].
        
        # While A[i] is present in hash table, keep removing elements from beginning 
        # of current window and keep subtracting window beginning element of B[] from current sum.

        # Add B[i] to current sum and update result if current sum becomes more.
        # Return result.
        
        somma = 0
        ans = -1
        index = 0
        
        mappa = {}
        
        for i in range(n):
            while (a[i] in mappa):
                mappa.pop(a[index])
                somma -= b[index]
                index +=1
            if a[i] not in mappa:
                mappa[a[i]] = 1
                somma += b[i]
                ans = max(ans, somma)
        
        return ans
        
#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    t=int(input())
    for _ in range(0,t):
        n=int(input())
        a=list(map(int,input().split()))
        b=list(map(int,input().split()))
        ob = Solution()
        ans=ob.returnMaxSum(a,b, n)
        print(ans)

# } Driver Code Ends