#User function Template for python3
import sys


class stack:
    def __init__(self):
        self.s = []
        self.minEle = sys.maxsize

    def push(self, x):
        #CODE HERE
        self.s += [x]
        self.minEle = min(self.minEle, x)

    def pop(self):
        #CODE HERE
        if len(self.s) < 1:
            return -1
        
        el = self.s[len(self.s) - 1]
        self.s.pop()
        
        if len(self.s) < 1:
            self.minEle = sys.maxsize
            return el
        
        if el == self.minEle:
            self.minEle = sys.maxsize 
            for it in self.s:
                self.minEle = min(self.minEle, it)
                
        return el
        
    def getMin(self):
        #CODE HERE
        if self.minEle == sys.maxsize:
            return -1
        return self.minEle

#{ 
 # Driver Code Starts
#contributed by RavinderSinghPB
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        q = int(input())

        arr = [int(x) for x in input().split()]

        stk=stack()  

        qi = 0
        qn=1
        while qn <= q:
            qt = arr[qi]

            if qt == 1:
                stk.push(arr[qi+1])
                qi+=2
            elif qt==2:
                print(stk.pop(),end=' ')
                qi+=1
            else:
                print(stk.getMin(),end=' ')
                qi+=1
            qn+=1
        print()

# } Driver Code Ends