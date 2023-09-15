#User function Template for python3

class Solution:
    def BoomNumber(self, K):
        # code here 
        ans = ""
        pot = 2
        
        while K > pot:
            K -= pot
            pot *= 2
            
        while pot > 1:
            pot >>= 1
            if K > pot:
                ans += "3"
                K -= pot
            else:
                ans += "2"
        
        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():
    T = int(input())
    while(T > 0):
        K = int(input())
        ob = Solution()
        print(ob.BoomNumber(K))
        T -= 1

if __name__ == "__main__":
    main()





# } Driver Code Ends