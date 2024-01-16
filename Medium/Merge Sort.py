#User function Template for python3

class Solution:
    def merge(self, arr, l, m, r): 
        # code here
        x = m - l + 1
        y = r - m
        
        left = [0] * x
        right = [0] * y
        
        for i in range(x):
            left[i] = arr[l + i]
            
        for j in range(y):
            right[j] = arr[m + 1 + j]
        
        a = 0
        b = 0
        c = l
        
        while a < x and b < y:
            if left[a] < right[b]:
                arr[c] = left[a]
                a += 1
            else:
                arr[c] = right[b]
                b += 1
            c += 1
        
        while a < x:
            arr[c] = left[a]
            a += 1
            c += 1
        
        while b < y:
            arr[c] = right[b]
            b += 1
            c += 1
        
    def mergeSort(self, arr, l, r):
        #code here
        if l<r:
            m = (l + (r - 1)) // 2
            
            self.mergeSort(arr, l, m)
            self.mergeSort(arr, m+1, r)
            self.merge(arr, l, m, r)
        
        return arr


#{ 
 # Driver Code Starts
#Initial Template for Python 3


import sys
input = sys.stdin.readline
if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        Solution().mergeSort(arr, 0, n-1)
        for i in range(n):
            print(arr[i],end=" ")
        print()
# } Driver Code Ends
