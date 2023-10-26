#User function Template for python3
import math

class Solution:
    def NthCharacter(self, N):
        # code here
        i = 0
        j = 1
        
        while True:
            nc = int(math.log10(j)) + 1
            if i + nc >= N:
                
                arr = []
                temp = j
                
                while temp > 0:
                    arr += [temp % 10]
                    temp //= 10
                    
                arr = arr[::-1]
                    
                #print(arr)
                #print(j, "    ", i, la, N)
                #print(N - i - 1)
                    
                #return 42
                return arr[N - i - 1]

            i += nc
            j += 1

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        
        ob = Solution()
        print(ob.NthCharacter(N))
# } Driver Code Ends