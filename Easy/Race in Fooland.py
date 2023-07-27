#User function Template for python3

class Solution:
    def emptyLanes(self, a, n, tracks):
        # list a contains pairs, example
        # a = [[1,2], [3,4], [5,6]] 
        # Your code goes here
        
        arr = sorted(a, key = lambda t:t[0])
        
        inizio = arr[0][0]
        fine = arr[0][1]
        
        occupati = fine - inizio + 1
        
        for i in range(1, n):
            uno = arr[i][0]
            due = arr[i][1]
            
            if uno > fine:
                fine = due
                occupati += fine - uno + 1
            
            elif uno <= fine and due > fine:
                occupati += due - fine
                fine = due

        return tracks - occupati

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, tracks = sz[0], sz[1]
        str = [int(x) for x in input().strip().split()]
        a = []
        for i in range(0,2*n,2):
            a.append([str[i], str[i+1]])
        ob=Solution()
        print(ob.emptyLanes(a, n, tracks))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends