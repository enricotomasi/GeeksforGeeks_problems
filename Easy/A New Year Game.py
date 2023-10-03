#User function Template for python3

class Solution:
    def minimumChocolates(self, arr, N):
        # code here
        
        ans = 0
        rem = 0
        
        for i in range(N):
            el = arr[i]
            
            #print(el, rem)
            
            if el > rem:
                temp = el - rem
                ans += temp
                rem += temp
            
            rem -= 1
            
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        N = int(input())
        arr = input().split()
        for itr in range(N):
            arr[itr] = int(arr[itr])
        
        ob = Solution()
        print(ob.minimumChocolates(arr, N))
# } Driver Code Ends