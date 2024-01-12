'''
    lis[][0]:Petrol
    lis[][1]:Distance
'''

class Solution:
    
    #Function to find starting point where the truck can start to get through
    #the complete circle without exhausting its petrol in between.
    def tour(self, lis, n):
        #Code here
        d = 0
        b = 0
        
        start = 0
        
        for i in range(n):
            b += lis[i][0] - lis[i][1]
            if b < 0:
                d += b
                
                start = i + 1
                b = 0
        
        
        if b + d >= 0:
            return start
        
        else:
            return -1

#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    t = int(input())
    for i in range(t):
        n = int(input())
        arr=list(map(int, input().strip().split()))
        lis=[]
        for i in range(1, 2*n, 2):
            lis.append([ arr[i-1], arr[i] ])
        print(Solution().tour(lis, n))
    # Contributed by: Harshit Sidhwa
# } Driver Code Ends
