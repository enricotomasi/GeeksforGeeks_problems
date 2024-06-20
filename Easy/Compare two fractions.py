#User function Template for python3


class Solution:
    def compareFrac (self, s):
        # code here
        pos = str.rfind(",")
        
        first = str[ : pos]
        second = str[pos + 1 : ]
        
        #print(first, " ****** ", second)
        
        p1 = first.find("/")
        num1 = int(first[ : p1])
        den1 = int(first[p1 + 1 : ])
        
        #print(num1, den1);
        
        p2 = second.find("/")
        num2 = int(second[ : p2])
        den2 = int(second[p2 + 1 : ])
        
        #print(num2, den2)
        
        if (num1 / den1) > (num2 / den2):
            return "% s" % num1 + "/" + "% s" % den1
        elif (num1 / den1) < (num2 /den2):
            return "% s" % num2 + "/" + "% s" % den2
        else:
            return "equal"




#{ 
 # Driver Code Starts
#Initial Template for Python 3
import re

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        str = input()
        print(ob.compareFrac(str))

# } Driver Code Ends