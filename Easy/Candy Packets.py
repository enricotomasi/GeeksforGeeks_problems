#User function Template for python3

class Solution:
    def countPackets(self, N):
        #code here
        ans = 1;
        candies = 0;
        i = 1
        
        while True:
            candies += i
            i += i
            
            if candies >= N:
                return ans
            
            ans += 1
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.countPackets(N))
# } Driver Code Ends