#User function Template for python3

class Solution:
    def find(self, A, B):
        # code here
        ans = 0
        
        if A % 4 == 1:
            A += 3
            ans += 2
        elif A % 4 == 2:
            A += 2
            ans += 2
        elif A % 4 == 3:
            A += 1
            ans +=1
        
        if B % 4 == 2:
            B -= 2
            ans += 1
        elif B % 4 == 3:
            B -=3
            ans += 2
            
        ans += (B-A) // 4 * 2
        
        return ans
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A,B = input().split()
        ob = Solution()
        print(ob.find(int(A),int(B)))
# } Driver Code Ends