#User function Template for python3
import math

class Solution:
    def longestNull(self, S):
        # Your code goes here 
        mappa = []

        mappa.append(["-", -1])
        maxlen = 0 
     
        for i in range(len(S)):
            mappa.append([S[i], i])
            while len(mappa) >= 3 and mappa[len(mappa) - 3][0] == "1" and mappa[len(mappa) - 2][0] == "0" and mappa[len(mappa) - 1][0] == "0":
                for j in range(3):
                    mappa.pop()
  
            tmp = mappa[-1]
            maxlen = max(maxlen, i - tmp[1])
     
        return maxlen

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        s = input()
        ob=Solution()
        print(ob.longestNull(s))

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends