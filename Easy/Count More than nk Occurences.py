#User function Template for python3


class Solution:
    
    #Function to find all elements in array that appear more than n/k times.
    def countOccurence(self, arr, n, k):
        #Your code here
        m = dict()
        
        for it in arr:
            if it in m:
                m[it] += 1
            else:
                m[it] = 1
        
        ans = 0
        freq = n // k
        
        for it in m:
            #print(it, m[it])
            if m[it] > freq:
                ans += 1
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=list(map(int,input().split()))
            
            K=int(input())
            
            print(Solution().countOccurence(A, N, K))
            
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends