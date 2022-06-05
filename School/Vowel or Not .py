 
#User function Template for python3
class Solution:
    def isVowel (ob,c):
        # code here 
        d = c.lower()
        
        if d == 'a': return 'YES'
        if d == 'e': return 'YES'
        if d == 'i': return 'YES'
        if d == 'o': return 'YES'
        if d == 'u': return 'YES'
        
        return 'NO'
       
            

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        c=input()

        ob = Solution()
        print(ob.isVowel(c))
# } Driver Code Ends