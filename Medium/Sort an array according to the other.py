#User function Template for python3

class Solution:
    # A1[] : the input array-1
    # N : size of the array A1[]
    # A2[] : the input array-2
    # M : size of the array A2[]
    
    #Function to sort an array according to the other array.
    def relativeSort (self, A1, N, A2, M):
        # Your Code Here
        a2 = []
        s = set()
        
        for it in A2:
            if it not in s:
                s.add(it)
                a2.append(it)
                
        #print(f"a2: {a2}")
        
        count = {}
        remain = []
        
        for it in A1:
            if it in count:
                count[it] += 1
            else:
                count[it] = 1
            
            if it not in s:
                remain.append(it)
        
        remain.sort()
        
        #print(f"count : {count}")
        #print(f"remian: {remain}")
        
        ans = []
        
        for it in a2:
            if it in count:
                for i in range(count[it]):
                    ans.append(it)
        
        ans += remain
        
        return ans
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int (input ())
    while t > 0:
        n, m = list(map(int, input().split()))
        a1 = list(map(int, input().split()))
        a2 = list(map(int, input().split()))
        
        ob=Solution()
        a1 = ob.relativeSort (a1, n, a2, m)
        print (*a1, end = " ")
        
        print ()
        
        t -= 1

# } Driver Code Ends