#User function Template for python3
def isVowel(c):
    if len(c) != 1:
        return False

    if c[0] == "A" or c[0] == "E" or c[0] == "I" or c[0] == "O" or c[0] == "U":
        return True
    
    return False

class Solution:
    def englishWords(self, S):
        # code here
        if isVowel(S[0]):
            return S
        
        n = len(S)
       
        pos = -1
        first = ""
        
        for i in range(n):
            if not isVowel(S[i]):
                pos = i + 1
                first += S[i]
            else:
                break
        
        #print(f"First: {first}")
        
        second = ""
        for i in range(pos, n):
            second += S[i]
            
        #print(f"Second: {second}")
            
        ans = second + first + "AY"
       
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        
        ob = Solution()
        print(ob.englishWords(S))
# } Driver Code Ends