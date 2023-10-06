#User function Template for python3

class Solution:
    #Function to return a list containing the intersection of two arrays.
    def printIntersection(self, a, b, n, m):
        '''
        :param a: given sorted array a
        :param n: size of sorted array a
        :param b: given sorted array b
        :param m: size of sorted array b
        :return: array of intersection of two array or -1
        '''
        # code here
        
        ans = list(set(a) & set(b))
        
        ans.sort()
        
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import io
import sys

#Contributed by : Nagendra Jha

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n,m = map(int,input().strip().split())
        a = list(map(int,input().strip().split()))
        b = list(map(int,input().strip().split()))
        ob=Solution()
        l = ob.printIntersection(a,b,n,m)
        print(*l)
# } Driver Code Ends