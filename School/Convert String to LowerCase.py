 
#User function Template for python3

class Solution:
    def toLower (ob, S):
        # code here 
        result = ""
        for c in S:
            ascii = ord(c);
            if ascii < 91:
                ascii += 32
            result += chr(ascii);
        return result

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S = input()
        
        ob = Solution()
        print(ob.toLower(S))
# } Driver Code Ends