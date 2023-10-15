#User function Template for python3

class Solution:
    def overlapPresent(self, S):
        # code here
        xact = False
        yact = False
        
        xy = False
        yx = False
        
        for c in S:
            #print(c, xact, yact)
            
            if xy == False and xact == True and c == "Y":
                    xy = True
                    xact = False
                    yact = False
                    continue
            
            if yx == False and yact == True and c == "X":
                yx = True
                xact = False
                yact = False
                continue
            
            if c == "X":
                xact = True
                yact = False
            elif c == "Y":
                yact = True
                xact = False
            else:
                xact = False
                yact = False
            
        
        if xy == True and yx == True:
            return "YES"
        
        return "NO"


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        S=input()
        ob = Solution()
        print(ob.overlapPresent(S))
# } Driver Code Ends