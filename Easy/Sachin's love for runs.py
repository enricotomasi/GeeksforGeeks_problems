#User function Template for python3

class Solution:
    def compute(self, a, n):
        # write your code here
        i = 0;
        j = 0;
        
        ans = 1;
        
        while j<n:
            if (i == j):
                j += 1;
                continue;
        
            if (a[j] >= a[j-1]):
                ans = max(ans, j-i+1);
                j+=1;
            else:
                i = j;
        
        return ans;
        
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):

        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.compute(a, n))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends