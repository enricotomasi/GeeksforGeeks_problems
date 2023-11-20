#User function Template for python3

class Solution:
    def findTwoElement(self, arr, n): 
        # code here
        arr.sort()
        
        #print(arr)
        
        double = -1
        missing = -1
        
        z = 0
        for i in range(n):
            if double >= 0 and missing >= 0:
                break
            
            if i > 0 and arr[i] == arr[i-1]:
                double = arr[i]
            elif arr[i] != z + 1:
                missing = z + 1
            else:
                z += 1
        
        if missing < 0:
            missing = n
        
        return [double, missing]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 

    tc=int(input())
    while tc > 0:
        n=int(input())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.findTwoElement(arr, n)
        print(str(ans[0])+" "+str(ans[1]))
        tc=tc-1
# } Driver Code Ends