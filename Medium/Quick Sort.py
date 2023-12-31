#User function Template for python3

class Solution:
    #Function to sort a list using quick sort algorithm.
    def quickSort(self, arr, low, high):
        # code here
        if low < high:
            pivot = Solution.partition(self, arr, low, high)
            Solution.quickSort(self, arr, low, pivot - 1)
            Solution.quickSort(self, arr, pivot + 1, high)
    
    def partition(self, arr, low, high):
        # code here
        pivot = arr[high]
        
        x = low - 1
        
        for i in range(low, high):
            if arr[i] <= pivot:
                x += 1
                arr[x], arr[i] = arr[i], arr[x]
        
        arr[x + 1], arr[high] = arr[high], arr[x + 1]
        
        return x + 1
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().quickSort(arr,0,n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()

# } Driver Code Ends