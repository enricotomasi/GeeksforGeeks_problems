#User function Template for python3

class Solution:
    def singleElement(self, arr, N):
        # code here
        m = {}
        
        for it in arr:
            if it in m:
                m[it] += 1
            else:
                m[it] = 1
        
        for it in m:
            if m[it] == 1:
                return it
        
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        print(ob.singleElement(arr,N))
# } Driver Code Ends
