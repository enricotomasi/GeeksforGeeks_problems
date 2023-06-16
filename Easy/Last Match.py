#User function Template for python3
class Solution:
    def findLastOccurence(self, A, B):
        # code here
        na = len(A)
        nb = len(B)
        
        ans = -1
        
        for i in range(na):
            trovato = False
            if A[i] == B[0] and i+nb <= na:
                trovato = True
                k = 1
                for j in range(i+1, i+nb):
                    if A[j] != B[k]:
                        trovato = False
                        break
                    k += 1
            if trovato == True:
                ans = i+1

        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        A = input()
        B= input()

        ob = Solution()
        print(ob.findLastOccurence(A,B))
# } Driver Code Ends