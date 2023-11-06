#User function Template for python3
import sys

class Solution:
    def minToggle(self, n, arr):
        # code here
        z = 0
        o = 0
        
        for it in arr:
            if it == 0:
                z += 1
            else:
                o += 1
        
        #print(f"Zeroes: {z}")
        #print(f"Ones  : {o}")
        
        ans = sys.maxsize
        
        zb = 0
        ob = 0
        
        for i in range(n):
            #print("\n#", i, arr[i])
            #print(z, o, " **** ", zb, ob)
            if arr[i] == 0:
                zb += 1
                z -= 1
            else:
                ob += 1
                o -= 1
            #print(z, o, " **** ", zb, ob)
            temp = ob + z 
            
            #print(temp)
            
            ans = min(ans, temp)

        return ans
        
        
        
        
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = input().split()
        for i in range(n):
            arr[i] = int(arr[i])
        
        ob = Solution()
        print(ob.minToggle(n, arr))
# } Driver Code Ends