#User function Template for python3

class Solution:
    def maxValueOfExpression(self, a, n):
        #Code here
        
        arr = []
        arrless = []
        arrplus = []
        
        for i in range(n):
            el = int(a[i])
            arr += [el]
            arrless += [(el - i)]
            arrplus += [(el + i)]
        
        ans = -1
        
        mless = max(arrless) - min(arrless)
        mplus = max(arrplus) - min(arrplus)
        
        ans = max(mless, mplus)
        
        return ans
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [x for x in input().strip().split()]
        
        print(Solution().maxValueOfExpression(a, n))
        
        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends