#User function Template for python3


class Solution:
    
    #Function to convert an infix expression to a postfix expression.
    def InfixtoPostfix(self, exp):
        #code here
        ans =""
        stack = []
        
        dic = {'^' : 3, '*' : 2, '/' : 2, '+' : 1, '-' : 1}
        
        for i in exp :
            if i.isalnum():
                ans += i  
            
            elif i =='(':
                stack.append(i)
            
            elif i == ')': 
                while stack and stack[-1] != '(':
                    ans+= stack.pop()
                stack.pop()
            else: 
                while stack and dic.get(stack[-1], 0) >= dic[i]:
                    ans += stack.pop()
                stack.append(i)
            
        while stack:
            ans += stack.pop()
            
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

# This code is contributed by Nikhil Kumar Singh(nickzuck_007)


_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        exp = str(input())
        ob=Solution()
        print(ob.InfixtoPostfix(exp))
# } Driver Code Ends
