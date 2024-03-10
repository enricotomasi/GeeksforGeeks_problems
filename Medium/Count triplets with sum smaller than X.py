class Solution:

    '''

        1) Sort the input array in increasing order.
        
        2) Initialize result as 0.
        
        3) Run a loop from i = 0 to n-2.  An iteration of this loop finds all
           triplets with arr[i] as first element.
             a) Initialize other two elements as corner elements of subarray
                arr[i+1..n-1], i.e., j = i+1 and k = n-1
             b) Move j and k toward each other until they meet, i.e., while (j = sum), then do k--
        
                    // Else for current i and j, there can (k-j) possible third elements
                    // that satisfy the constraint.
                    (ii) Else Do ans += (k - j) followed by j++ 
    '''

    def countTriplets(self, arr, n, sumo):
        #code here
        arr.sort()
        ans = 0
        
        for i in range(n - 1):
            j = i + 1
            k = n - 1

            while j < k:
                if arr[i] + arr[j] + arr[k] < sumo:
                    ans += k - j
                    j += 1
                else:
                    k -= 1
        
        return ans
#{ 
 # Driver Code Starts

t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    n=l[0]
    k=l[1]
    a=list(map(int,input().split()))
    ob = Solution()
    ans=ob.countTriplets(a,n,k)
    print(ans)
# } Driver Code Ends