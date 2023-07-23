#User function Template for python3

class Solution:
    def noOfTriangles(self, arr, n):
        
        # Your code goes here
        arr.sort()
        
        ans = 0
        temp = n - 1
        
        while temp >= 2:
            inizio = 0
            fine = temp - 1
            
            while inizio < fine:
                if arr[inizio] + arr[fine] > arr[temp]:
                    ans += fine - inizio
                    fine -= 1
                else:
                    inizio += 1
            temp -= 1
            
        return ans




    



#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.noOfTriangles(a, n))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends