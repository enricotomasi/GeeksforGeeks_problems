
class Solution:
    def trappingWater(self, arr, n):
        #Code here
        maxsx = [-1] * n
        
        temp = -1
        for i in range(n-1, -1, -1):
            temp = max(temp, arr[i])
            maxsx[i] = temp
        
        temp = -1
        maxdx = [-1] * n
        for i in range(n):
            temp = max(temp, arr[i])
            maxdx[i] = temp
        
        ans = 0
        
        for i in range(1, n - 1):
            ans += abs(arr[i] - min(maxsx[i], maxdx[i]));
        
        return ans
     

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            obj = Solution()
            print(obj.trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()



# } Driver Code Ends