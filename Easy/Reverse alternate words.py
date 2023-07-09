#User function Template for python3


class Solution:

    def reverseAlternate(self, Str):
        # code here
        reve = False
        
        parole = Str.split(" ")
        #print(parole)
        
        ans = []
        
        for i in parole:
            if reve:
                pr = i[::-1]
                ans += [pr]
            else:
                ans += [i]
            
            reve = not reve
        
        return ' '.join(ans)

        
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):

        Str = input()

        solObj = Solution()

        print(solObj.reverseAlternate(Str))

# } Driver Code Ends