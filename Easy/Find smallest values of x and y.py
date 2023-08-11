#User function Template for python3

class Solution:
    def findXY(self, a, b):
        # code here
        n = min(a, b)
        i = 2
        
        while i != n + 1:
            if a % i == 0 and b % i == 0:
                a //= i
                b //= i
            else:
                i +=1
                
        return [b, a]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        a, b = [int(x) for x in input().split()]
        
        ob = Solution()
        x, y = ob.findXY(a, b)
        print(x, end=" ")
        print(y)
# } Driver Code Ends