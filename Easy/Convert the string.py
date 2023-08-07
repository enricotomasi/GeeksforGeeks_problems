
#User function Template for python3

class Solution:

    def transform(self, Str):
        # code here
        ans = ""
         
        for it in Str:
            low = it.lower()
             
            if low == "a" or low == "e" or low == "i" or low == "o" or low == "u":
                continue
            
            ans += "#"
            
            if ord(it) >= ord("a") and ord(it) <= ord("z"):
                ans += it.upper()
            else:
                ans += low
        
        if ans == "":
            return "-1"
            
        return ans
             
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Str = input()

        solObj = Solution()

        print(solObj.transform(Str))


# } Driver Code Ends