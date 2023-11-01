class Solution:
    #Function to count the frequency of all elements from 1 to N in the array.
    def frequencyCount(self, arr, N, P):
        # code here
        freq = {}
        
        for it in arr:
            if it in freq:
                freq[it] += 1
            else:
                freq[it] = 1
        
        #print(freq)
        
        for i in range(N):
            el = i + 1
            
            if el in freq:
                arr[i] = freq[el]
            else:
                arr[i] = 0
        
        
        
        




#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
if __name__=="__main__":
	T=int(input())
	while(T>0):
		N=int(input())
		arr=[int(x) for x in input().strip().split()]
		P=int(input())
		ob=Solution()
		ob.frequencyCount(arr, N, P)
		for i in arr:
			print(i, end=" ")
		print()
		T-=1



# } Driver Code Ends