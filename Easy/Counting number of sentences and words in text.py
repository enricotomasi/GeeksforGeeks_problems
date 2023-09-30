#User function Template for python3

class Solution:
    def sentenceWord(self, text):
        # code here
        sent = 1
        words = 1
        
        last = " "
        
        for c in text:
            if (c == "." or c == "!" or c == "?") and (last != "." and last != "!" and last != "?"):
                sent += 1
            elif c == " " and last != " ":
                words += 1
                
            last = c

        if last == "." or last == "!" or last == "?":
            sent -=1
        
        if last == " ":
            words -=1

        return [sent, words]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        text = input()
        
        ob = Solution()
        ans = ob.sentenceWord(text)
        print(ans[0],ans[1])
# } Driver Code Ends