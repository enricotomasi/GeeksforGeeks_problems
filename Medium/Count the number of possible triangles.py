#User function Template for python3

class Solution:
    #Function to count the number of possible triangles.
    def findNumberOfTriangles(self, arr, n):
        #code here
        arr.sort()
        ans = 0 
        
        for i in range(n - 1, 1, -1):
            j = i - 1
            k = 0 
            
            while  k < j :
                if arr[k] + arr[j] > arr[i]:
                    ans += j - k 
                    j -= 1
                else : 
                    k += 1
                    
        return ans 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.findNumberOfTriangles(arr,n))

# } Driver Code Ends
