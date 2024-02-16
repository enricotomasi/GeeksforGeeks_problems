
class Solution:
    def isMaxHeap(self, arr, n):
        # Your code goes here
        for i in range(n):
            left = (i * 2) + 1
            right = left + 1
            
            if (left < n and arr[i] < arr[left]) or (right < n and arr[i] < arr[right]):
                return False
            

        return True

#{ 
 # Driver Code Starts
if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n=int(input())
        arr=[int(x) for x in input().split()]
        ob=Solution()
        print(int(ob.isMaxHeap(arr,n)))
# } Driver Code Ends