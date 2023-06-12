#User function Template for python3

class Solution:
    def maxNumbers(self, n, k, a):
        # code here
        somma = 0
        ans = 0
        
        a.sort()
        ai = 0
        
        for i in range(1, 100000000):
            if somma + i > k:
                break
            
            if ai < n and i == a[ai]:
                ai += 1;
                continue;
            
            somma += i
            ans += 1

        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, k = [int(x) for x in input().split()]
        a = input().split()
        for it in range(n):
            a[it] = int(a[it])
        
        ob = Solution()
        print(ob.maxNumbers(n, k, a))
# } Driver Code Ends