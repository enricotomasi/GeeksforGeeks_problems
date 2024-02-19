#User function Template for python3
import heapq
from collections import Counter


class Solution:
    def minValue(self, s, k):
        # code here
        counter_obj = Counter(s)
        
        tarr = list(counter_obj.items())
        tarr = sorted(tarr, key=lambda x: x[1])
        
        arr = [list(it[::-1]) for it in tarr]
        
        h = []
        
        for it in arr:
            it[0] = -1 * it[0] 
            heapq.heappush(h, it)
            
        while k > 0:
            temp = heapq.heappop(h)
            temp[0] +=1 
            heapq.heappush(h, temp)
            k -= 1
        
        ans = 0
        
        for it in h:
            ans += it[0] ** 2
        
        return ans
        
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        k = int(input())
        
        ob = Solution()
        print(ob.minValue(s, k))
# } Driver Code Ends
