#User function Template for python3
import sys

class Solution:
    def maxsum_SIS(self, arr, n): 
        # Your code goes here
        ans = -1
        
        last = sys.maxsize
        temp = 0
        
        for i in range(n):
            if last < arr[i]:
                temp += arr[i]
            else:
                ans = max(ans, temp)
                temp = arr[i]
            last = arr[i]
            
            
        return max(ans, temp)


#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        ob=Solution()
        print( ob.maxsum_SIS(arr , n) )

        T -= 1


if __name__ == "__main__":
    main()
    
# } Driver Code Ends