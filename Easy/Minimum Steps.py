#User function Template for python3
import math

class Solution:    
    def moves(self, n, p, q):
        # Your code goes here
        if q == 1 and p == 1:
            return n
            
        if p == 1:
            p = q
            
        if q == 1:
            q = p

        mappa = set([n])
        ans = 0

        while 0 not in mappa:
            s = set()
            for it in mappa:
                s.add(it - p**int(math.log(it, p)))
                s.add(it - q**int(math.log(it, q)))
            mappa = s
            ans += 1

        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
    	sz = [int(x) for x in input().strip().split()]
    	n, p, q = sz[0], sz[1], sz[2]
    	ob=Solution()
    	print(ob.moves(n, p, q))
    	
    	T -= 1

if __name__ == "__main__":
    main()



# } Driver Code Ends