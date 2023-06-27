#User function Template for python3

class Solution:

    def decodeIt(self, Str, k):
        # code here
        dec = ""
        temp = ""

        for c in Str:
            if c >= "0" and c <= "9":

                times = ord(c) - ord("0")
                dec = ""
                for i in range(times):
                    dec += temp
                
                temp = dec

            else:
                temp += c;

        return dec[k-1]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Str = input()
        k = int(input())

        solObj = Solution()

        print(solObj.decodeIt(Str, k))
# } Driver Code Ends