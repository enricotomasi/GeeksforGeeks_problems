 
#User function Template for python3

class Solution:

    def extractIntegerWords(self, s):
        # code here
        ans = []
        temp = ""
       
        for c in s:
            if c >= '0' and c <= '9':
                temp += c
            else:
                if temp != "":
                    ans.append(temp)
                    temp = ""
   
        if temp != "":
            ans.append(temp)
            
        return ans
        
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        s = input()

        solObj = Solution()

        if solObj.extractIntegerWords(s):
            print(*solObj.extractIntegerWords(s))
        else:
            print("No Integers")

# } Driver Code Ends