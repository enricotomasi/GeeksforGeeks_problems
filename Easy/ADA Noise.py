#User function Template for python3


class Solution:
    def updateString(self, S): 
        # code here
        n = len(S)
        i = 0
        
        signal = ""
        noise = ""
        
        while i < n:
            if S[i] == 'a' and i+2 < n and S[i+1] == "d" and S[i+2] == "a":
                noise += "ada"
                i += 3
                
                while i+1 < n and S[i] == "d" and S[i+1] == "a":
                    noise += "da"
                    i += 2
                
            else:
                signal += S[i]
                i +=1
            
        
        ans = signal + noise
        
        return ans
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        S = input()
        ob = Solution()
        print(ob.updateString(S))

# } Driver Code Ends