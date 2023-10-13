#User function Template for python3

class Solution:
    def extraCount(self, s):
        # code here
        n = len(s)
        mappa = dict()
        
        for i in range(n):
            el = s[i]
            if el in mappa:
                mappa[el] += 1
            else:
                mappa[el] = 1
        
        r =  str(int(n/4 - mappa["R"]))
        b =  str(int(n/4 - mappa["B"]))
        y =  str(int(n/4 - mappa["Y"]))
        g =  str(int(n/4 - mappa["G"]))
        
        return [r, b, y, g]
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        
        ob = Solution()
        ans = ob.extraCount(s)
        print("R"+ans[0]+"B"+ans[1]+"Y"+ans[2]+"G"+ans[3])
# } Driver Code Ends