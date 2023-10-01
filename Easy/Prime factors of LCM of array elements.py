#User function Template for python3
from math import gcd
from functools import reduce


def lcm(n):
    return reduce(lambda a,b: a*b // gcd(a,b), n)

class Solution:
    def primeFactorLcm(self, Arr, N):
        # code here
        l = lcm(Arr)
        #print(l)
        
        ans = []
        
        i = 2
        
        while i*i <= l:
            while (l % i) == 0:
                if i not in ans:
                    ans.append(i)
                l //= i
            i += 1
        
        if l > 1:
            ans.append(l)
        
        return ans
        

        

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range (t):
        N = int(input())
        Arr = input().split()
        for itr in range(N):
            Arr[itr] = int(Arr[itr])
        
        ob = Solution()
        ans = ob.primeFactorLcm(Arr,N)
        for i in range(len(ans)) :
            print(ans[i], end = " ")
        print()
# } Driver Code Ends