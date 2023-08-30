#User function Template for python3

class Solution:
    def findMaximumNum(self, arr, n):
        # code here
        arr.sort()
        
        n -= 1
        el = 1

        while n >= 0:
            #print(el, arr[n])
            if (el == arr[n]):
                return el
            elif (el > arr[n]):
                return el - 1
                
            el += 1
            n -= 1
        
        return len(arr)
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMaximumNum(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends