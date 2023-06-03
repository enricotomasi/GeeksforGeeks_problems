#User function Template for python3
class Solution:
    def commonSubseq (ob, S1, S2):
        # code here 
        a1 = [0] * 26
        a2 = [0] * 26

        for i in S1:
            #print(ord(i) - ord('A'))
            a1[ord(i) - ord('A')] += 1
            
        for i in S2:
            a2[ord(i) - ord('A')] += 1
            #print(ord(i) - ord('A'))

        for i in range(26):
            if (a1[i] > 0 and a2[i] > 0):
                return 1

        return 0

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S1, S2 = input().split()
        
        ob = Solution()
        print(ob.commonSubseq(S1, S2))
# } Driver Code Ends