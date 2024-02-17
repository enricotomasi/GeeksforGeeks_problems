#User function Template for python3


#Function to determine if graph can be coloured with at most M colours such
#that no two adjacent vertices of graph are coloured with same colour.
def graphColoring(graph, k, V):
    #your code here
    arr = [0] * V
    
    def check(i, node):
        for j in range(V):
            if graph[node][j] == 1 and arr[j] == i:
                return False
        
        return True
    
    def rec(V, t):
        if t == V:
            return True
        
        for i in range(1, k + 1):
            if check(i, t):
                arr[t] = i
        
                if rec(V, t + 1) == True:
                    return True
                else:
                    arr[t] = 0
        
        return False
    
    if rec(V, 0) == True:
        return True
    
    return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while(t>0):
        V = int(input())
        k = int(input())
        m = int(input())
        list = [int(x) for x in input().strip().split()]
        graph = [[0 for i in range(V)] for j in range(V)]
        cnt = 0
        for i in range(m):
            graph[list[cnt]-1][list[cnt+1]-1]=1
            graph[list[cnt+1]-1][list[cnt]-1]=1
            cnt+=2
        if(graphColoring(graph, k, V)==True):
            print(1)
        else:
            print(0)

        t = t-1

# } Driver Code Ends