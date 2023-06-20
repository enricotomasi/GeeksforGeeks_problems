#User function Template for python3

class Solution:
    def findUniquePair(self, arr, n): 
        # Complete the function
        mappa = {};
        
        for it in arr:
            if (it not in mappa):
                mappa[it] = 1;
            else:
                mappa[it] += 1;
        
        prima = -1;
        seconda = -1;
        
        for key, value in mappa.items():
            #print(it, end = " ");
            if (value == 1):
                if (prima > 0):
                    seconda = key;
                else:
                    prima = key;
        
        return [min(prima, seconda), max(prima, seconda)];


#{ 
 # Driver Code Starts
    
for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    v = ob.findUniquePair(arr, n)
    print(*v)
    
# } Driver Code Ends