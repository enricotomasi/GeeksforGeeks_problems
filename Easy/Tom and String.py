#User function Template for python3
class Solution:
    def hashString(self, S):
        # code here 
        n = len(S)

        x = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        
        ans = 0
        spazi = 1
        
        pos = 0
        for it in S:
            if it == " ":
                pos = 0
                spazi += 1
                #print("Spazio!")
            else:
               p1 = x.find(it)
               ans += p1
               ans += pos
               
               #print(it, pos, p1)
               
               pos +=1
               
        
        return ans * spazi

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        s = input()
        ob = Solution()
        print(ob.hashString(s))

# } Driver Code Ends