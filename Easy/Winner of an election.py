#User function Template for python3

class Solution:
    
    #Complete this function
    
    #Function to return the name of candidate that received maximum votes.
    def winner(self, arr, n):
        # Your code here
        # return the name of the winning candidate and the votes he recieved
        d = dict()
        
        for it in arr:
            #print(it)
            if it in d:
                d[it] += 1
            else:
                d[it] = 1
                
        votes = -1
        
        for it in d:
            votes = max(votes, d[it])
        
        #print("d: ",d)
        
        win = []
        
        for it in d:
            #print(it)
            if d[it] == votes:
                win += [it]
        
        win.sort()
        #print("win:", win)
        
        return [win[0], votes]
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    T=int(input())
    for _ in range(T):
        
        n=int(input())
        arr=input().strip().split()
        
        result = Solution().winner(arr,n)
        print(result[0],result[1])
# } Driver Code Ends