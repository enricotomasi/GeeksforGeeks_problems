#User function Template for python3
class Solution:
    def ableTorescue(self, Arr, n, k):
        # code here
        energia = k
        
        for i in range(n):
            if Arr[i] %2 != 0:
                energia = k
            else:
                energia -= 1
            
            if energia < 0:
                return 0
        
        return 1





#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n,k = input().split()
        n=int(n)
        k=int(k)
        Arr = input().split()
        for i in range(0,n) :
            Arr[i] = int(Arr[i])
        
        ob = Solution()
        print(ob.ableTorescue(Arr, n, k))

# } Driver Code Ends