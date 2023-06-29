#User function Template for python3

# Hint:
#
# An efficient solution is based on the fact that if we know all elements in a subarray arr[i..j] are distinct, 
# sum of all lengths of distinct element subarrays in this subarray is ((j-i+1)*(j-i+2))/2. 
# Since, the possible lengths of subarrays are 1, 2, 3,……, j – i +1. So, the sum will be ((j – i +1)*(j – i +2))/2.


class Solution:
    def sumoflength(self, arr, n):
        c = 0
        temp = set()
        ans = 0
        
        for i in range(n):
            while c < n and arr[c] not in temp:
                temp.add(arr[c])
                c += 1
            ans += (c - i) * (c - i + 1) // 2
            temp.remove(arr[i])
    
        return ans 
      
      


#{ 
 # Driver Code Starts
#Initial Template for Python 3



t=int(input())
for _ in range(0,t):
    n=int(input())
    a = list(map(int,input().split()))
    ob=Solution()
    ans=ob.sumoflength(a,n)
    print(ans)

# } Driver Code Ends