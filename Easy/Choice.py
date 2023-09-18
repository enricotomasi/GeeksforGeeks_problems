#User function Template for python3

class Solution:
    def arrayForm(self, a, b, c):
        # Code here
        return [a, b, c]
        
        
    def stringForm(self, a, b, c):
        # Code here
        return str(a) + str(b) + str(c)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        a, b, c = list(map(int, input().split()))
        obj = Solution()
        res = obj.arrayForm(a,b,c);
        for val in res:
            print(val, end = ' ')
        print()
        print(obj.stringForm(a,b,c))
# } Driver Code Ends