# User function Template for python3

class Solution:
    def toh(self, N, f, to, aux):
        # Your code here
        count = 0  
        
        if N == 0:
            return count

        if N == 1:
            print("move disk " + str(N) + " from rod " + str(f) + " to rod " + str(to))
            count += 1
            return count

        count += self.toh(N - 1, f, aux, to)
        
        print("move disk " + str(N) + " from rod " + str(f) + " to rod " + str(to))

        count += 1
        count += self.toh(N - 1, aux, to, f)
        
        return count
        

#{ 
 # Driver Code Starts
# Initial Template for Python 3


import math


def main():

    T = int(input())

    while(T > 0):
        N = int(input())
        ob = Solution()
        print(ob.toh(N, 1, 3, 2))
        T -= 1
if __name__ == "__main__":
    main()


# } Driver Code Ends
