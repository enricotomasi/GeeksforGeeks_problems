#User function Template for python3

class Solution:
    def connellSequence(self, n):
        # code here
        if n == 0:
            return []
        
        ans = []
        num = 0 
        seq = 0
        i = 0
        
        while i < n:
            seq += 1
            fatto = False
            
            #print(seq)
            
            for j in range (seq):
                i += 1
                if i > n:
                    break
                if (fatto):
                    num += 2
                else:
                    fatto = True
                    num += 1
                
                ans += [num]

            
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        arr = ob.connellSequence(n)
        for i in (arr):
            print(i,end=" ")
        print()
# } Driver Code Ends