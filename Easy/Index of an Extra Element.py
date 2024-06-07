class Solution:
    def findExtra(self, n, a, b):
        #add code here
        if n == 1:
            return 0
        
        if a[n - 1] != b[n - 2]:
            return n - 1
        
        if a[0] != b [0]:
            return 0;
        
        start = 0;
        end = n - 2;
        
        mid = 0
        
        while start < end:
            mid = (start + end) // 2
            
            #print(start, end, mid)
            
            if a[mid] == b[mid]:
                if mid <= n - 2 and a[mid + 1] != b[mid + 1]:
                    return mid + 1
                start = mid + 1
            else:
                if mid > 0 and a[mid - 1] == b[mid - 1]:
                    return mid
                
                end = mid - 1
        


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        print(Solution().findExtra(n, a, b))

# } Driver Code Ends