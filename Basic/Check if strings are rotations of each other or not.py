#User function Template for python3

class Solution:
    
    #Function to check if two strings are rotations of each other or not.
    def areRotations(self, s1, s2):
        #code here
        n = len(s1)
        #print(n, "\n")
        
        if n != len(s2):
            return 0
            
        for i in range(n):
            ok = True
            
            for j in range(n):
                pos1 = j
                primo = s1[pos1]
                
                pos2 = (i + j) % n
                secondo = s2[pos2]
                
                #print(pos1, pos2)
                
                if primo != secondo:
                    ok = False
                    break
            
            if ok:
                return 1
                
        
        return 0

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s1=str(input())
        s2=str(input())
        if(Solution().areRotations(s1,s2)):
            print(1)
        else:
            print(0)
    
        
# } Driver Code Ends
