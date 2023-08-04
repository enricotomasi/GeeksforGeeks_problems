#User function Template for python3

class Solution:
    def mergeSort(self, arr, s, d):
        ans = 0
        if s < d:
            meta = (s + d) // 2
            ans += self.mergeSort(arr, s, meta)
            ans += self.mergeSort(arr, meta+1, d)
            ans += self.merge(arr, meta, s, d)
        return ans
        
    def merge(self, arr, meta, s, d):
        a = meta - s + 1
        b = d - meta
        
        sx = []
        rx = []
        
        for i in range(a):
            sx.append(arr[s + i])
        for i in range(b):
            rx.append(arr[meta + 1 + i])
            
        ans = 0
        
        c = 0
        d = s
        e = 0
        
        while c < a and  e < b:
            if sx[c] <= rx[e]:
                arr[d] = sx[c]
                c += 1
            else:
                arr[d] = rx[e]
                e += 1
                ans += a - c
            d += 1
        while c < a:
            arr[d] = sx[c]
            c += 1
            d += 1

        while e < b:
            arr[d] = rx[e]
            e += 1
            d += 1
        return ans
        
	def countSwaps(self, arr, n):
		# code here
		return self.mergeSort(arr, 0, n-1)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		arr = [int(x) for x in input().split()]

		ob = Solution()
		ans = ob.countSwaps(arr, n)
		print(ans)

# } Driver Code Ends