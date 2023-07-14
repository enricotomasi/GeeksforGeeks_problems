#User function Template for python3

class Solution:
    def find(self, A, B): 
        # code here

        while True:
            A += 1
            if A % B == 0:
                return A

#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A,B = input().split()
        A = int(A)
        B = int(B)
        ob = Solution()
        print(ob.find(A,B))
# } Driver Code Ends