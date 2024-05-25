
class Solution:
    #Your task is to complete this function
    #Function should return an integer
    #a - list/array containing height of stack's respectively
    def max_Books(self, n, k, arr):
        #code here
        supp = [ 0 ] * (n + 1)
        
        for i in range(n):
            if arr[i] <= k:
                supp[i + 1] = supp[i] + arr[i]
            else:
                supp[i + 1] = 0
        
        ans = -1
        
        for i in range(n + 1):
            #print(supp[i], end = " ")
            ans = max(ans, supp[i])
        
        #print()
        return ans
                


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        temp = list(map(int, input().strip().split()))
        n = temp[0]
        k = temp[1]
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.max_Books(n, k, arr))
# Contributed by:Harshit Sidhwa

# } Driver Code Ends