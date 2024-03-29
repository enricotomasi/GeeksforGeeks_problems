#User function Template for python3

class Solution:
    def countSubArrayProductLessThanK(self, a, n, k):
        #Code here
        start = 0
        ans = 0
        mul = 1
        
        for i in range(n):
            mul *= a[i]
            
            while mul >= k and start <= i:
                mul /= a[start]
                start += 1
            
            ans += i - start + 1 
            
        return ans


#{ 
 # Driver Code Starts

#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n, k = [int(x) for x in input().strip().split()]
        arr = [int(x) for x in input().strip().split()]
        
        print(Solution().countSubArrayProductLessThanK(arr, n, k))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends
