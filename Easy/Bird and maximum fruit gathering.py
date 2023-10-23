#User function Template for python3

class Solution:
    def maxFruits(self, arr, n, m):
        head = []
        for i in range(m):
            head += [arr[i]]
        
        tail = []
        for i in range(n-m, n):
            tail += [arr[i]]
        
        arr = tail + arr + head
        
        #print(arr)
        
        ans = -1
        temp = 0
        
        for i in range(n + (m * 2)):
            temp += arr[i]
            
            if i >= m:
                temp -= arr[i-m]
                ans = max(ans, temp)
        
            #print(temp)
            
        return ans
                
            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t=int(input())
for _ in range(0,t):
    #n=int(input())
    l=list(map(int,input().split()))
    n=l[0]
    m=l[1]
    a = list(map(int,input().split()))
    ob=Solution()
    ans=ob.maxFruits(a,n,m)
    print(ans)
# } Driver Code Ends