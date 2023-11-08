#User function Template for python3

class Solution:
    def columnWithMaxZeros(self, arr, N):
        # code here 

        m = -1
        ans = -1
        
        ok = False
        
        for i in range(N):
            
            temp = 0
            
            for j in range(N):
                if arr[j][i] == 0:
                    temp += 1
                    ok = True
                
                if temp > m:
                    ans = i
                    m = temp
                
        if ok:
            return ans
        
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = []
        for i in range(N):
            line = [int(x) for x in input().strip().split()]
            arr.append(line)
        ob=Solution()
        print(ob.columnWithMaxZeros(arr,N))


# } Driver Code Ends