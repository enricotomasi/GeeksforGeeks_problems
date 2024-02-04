#User function Template for python3

class Solution:
    #Function to count subarrays with sum equal to 0.
    def findSubArrays(self, arr, n):
        #return: count of sub-arrays having their sum equal to 0
        d = {0 : 1}
        temp = 0
        ans = 0
        
        for it in arr:
            temp += it
        
            if temp in d:
                ans += d[temp]
            
            if temp in d:
                d[temp] += 1
            else:
                d[temp] = 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
        
if __name__=='__main__':
    t=int(input())
    for tc in range(t):
        
        N=int(input())
        A = [int(x) for x in input().strip().split(' ')]
        ob = Solution()
        print(ob.findSubArrays(A,N))
        
                
                
# } Driver Code Ends