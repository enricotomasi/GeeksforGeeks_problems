#User function Template for python3

class Item:
    def __init__(self, val, w):
        self.value = val
        self.weight = w
        
class Solution:    
    #Function to get the maximum total value in the knapsack.
    def fractionalknapsack(self, W, arr, n):
        # code here
        temp = []
        
        for it in arr:
            v1 = it.value
            w1 = it.weight
            
            r1 = v1 / w1
            
            temp += [(r1, w1, v1)]
        
        temp.sort()
        temp = temp[::-1]
        
        #print(temp)
        
        ans = 0.0
        
        for it in temp:
            v2 = it[2]
            w2 = it[1]
            
            #print(f"v2: {v2}, w2: {w2}, W: {W}")
            
            if w2 > W:
                v3 = (v2 / w2) * W
                ans += v3
                W = 0
                #print(f"v3: {v3}, ans: {ans}, W: {W}")
                break
            else:
                ans += v2
                W -= w2
                #print(f"v2: {v2}, ans: {ans}, W: {W}")
            #print()
        
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha

class Item:
    def __init__(self,val,w):
        self.value = val
        self.weight = w
        
if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n,W = map(int,input().strip().split())
        info = list(map(int,input().strip().split()))
        arr = [Item(0,0) for i in range(n)]
        for i in range(n):
            arr[i].value = info[2*i]
            arr[i].weight = info[2*i+1]
            
        ob=Solution()
        print("%.2f" %ob.fractionalknapsack(W,arr,n))

# } Driver Code Ends