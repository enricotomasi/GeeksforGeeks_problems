#User function Template for python3


class Solution:

    def isPoss(self, a, b):
        # code here
        map = dict()
        
        for c in b:
            if c in map:
                map[c] += 1
            else:
                map[c] = 1
        
        for c in a:
            #print(c, map[c])
            if c in map:
                map[c] -= 1
                if map[c] < 0:
                    return 0
            else:
                return 0
        
        return 1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        A = input()
        B = input()

        solObj = Solution()

        if solObj.isPoss(A, B):
            print(1)
        else:
            print(0)
# } Driver Code Ends