#User function Template for python3
class Solution:
	def minThirdPiles(self, A, B):
		# code here
        c = 1
        
        while True:
            d = A + B + c
            
            primo = True
            for i in range (2, d):
                if d % i == 0:
                    primo = False
                    break
            
            if primo == True:
                return c
            
            c += 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		A,B = input().split()
		A=int(A)
		B=int(B)
		ob = Solution();
		print(ob.minThirdPiles(A,B))

# } Driver Code Ends