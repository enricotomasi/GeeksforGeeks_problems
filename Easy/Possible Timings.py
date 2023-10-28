#User function Template for python3
class Solution:
    def numberOfPossibleTimings (self, S):
        # code here 
        arr = [2, 7, 2, 3, 3, 4, 2, 5, 1, 2]
        
        a = arr[ord(S[0]) - ord("0")]
        b = arr[ord(S[1]) - ord("0")]
        
        return a * b


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S=str(input())

        ob = Solution()
        print(ob.numberOfPossibleTimings(S))

# } Driver Code Ends