#User function Template for python3
class Solution:
    #Function to return sum of count of set bits in the integers from 1 to n.
    def countSetBits(self, n):
        # code here
        # return the count
        
        ans = 0
        
        i = 2
        n += 1
        
        while i // 2 < n:
            ans += (n // i) * (i // 2) + max(n % i - i // 2, 0)
            i *= 2
        
        return ans
       




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    for _ in range(int(input())):
        ob=Solution()
        print(ob.countSetBits(int(input())))
# } Driver Code Ends