#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys


# } Driver Code Ends
#User function Template for python3

class Solution:
    
    # Function to return a list of indexes denoting the required 
    # combinations whose sum is equal to given number.
    
    
    '''
    Sort the array(non-decreasing).
    First remove all the duplicates from array.
    
    Then use recursion and backtracking to solve the problem.
    
    If:
        at any time subproblem sum==0 then add that array to the result(vector of vectors).
    else if:
        sum if negative then ignore that subproblem.
    else:
        insert the present array in that index to the current vector and call the function with sum = sum - A[index] and index = index,
        then pop that element from current index (backtrack) and call the function with sum=sum and index = index + 1,
    
    '''
    
    def combinationalSum(self, A, B):
        # code here
        def rec(A, t, i, tempArr, ans):
            if i == len(A):
                if t == 0:
                    k = tempArr.copy()
                    ans.append(k)
                return
            
            if A[i] <= t:
                tempArr.append(A[i])
                rec(A, t - A[i], i, tempArr, ans)
                tempArr.pop()
            
            rec(A, t, i + 1, tempArr, ans)
        
        arr = set(A)
        arr = list(arr)
        arr.sort()
        
        ans = []

        rec(arr, B, 0, [], ans)
        
        return ans
        

          
        
        
        

#{ 
 # Driver Code Starts.


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())
        a = list(map(int,input().strip().split()))
        s = int(input())
        ob = Solution()
        result = ob.combinationalSum(a,s)
        if(not len(result)):
            print("Empty")
            continue
        for i in range(len(result)):
            print("(", end="")
            size = len(result[i])
            for j in range(size - 1):
                print(result[i][j], end=" ")
            if (size):
                print(result[i][size - 1], end=")")
            else:
                print(")", end="")
        print()

# } Driver Code Ends