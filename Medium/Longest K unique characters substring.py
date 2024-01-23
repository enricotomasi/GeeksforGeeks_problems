#User function Template for python3

'''
    Try using a two-pointer approach. 
    The right pointer moves till the number of unique characters are less than or equal to K.
    As the unique characters exceed K, the right pointer stops. 
    Then, the left-pointer moves to exclude the minimum elements from the current window 
    such that the unique element again become equal to K.
'''

from collections import defaultdict
class Solution:

    def longestKSubstr(self, s, k):
        # code here
        ans = -1 
        temp = 0
        j = 0
        m = defaultdict(int)
        
        for i in range(len(s)):
            if s[i] in m:
                m[s[i]] += 1 
            else:
                m[s[i]] = 1 
                temp += 1 
            
            while temp > k and j <= i:
                m[s[j]] -= 1 
                
                if m[s[j]] == 0:
                    del m[s[j]]
                    temp -= 1 
                
                j += 1 
            
            if temp == k:
                ans = max(ans, (i - j + 1))
                
        return ans




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        s = input()
        k = int(input())

        solObj = Solution()

        ans = solObj.longestKSubstr(s, k)

        print(ans)

# } Driver Code Ends
