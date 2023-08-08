#User function Template for python3

class Solution:
    def LargestSwap(self, S):
        #code here
        n = len(S)
        i1 = 0
        
        massimo = int(max(S))
        #for it in S:
            #cifra = ord(it) - ord("0")
            #massimo = max(massimo, cifra)
        
        #print(massimo)
        
        for i in range(n):
            if S[i] != "9" and S[i] != str(massimo):
                i1 = i
                break;
        
        c = int(S[i1])
        
        i2 = 0
        for i in range(i1 + 1, n):
            if int(S[i]) >= c:
                c = int(S[i])
                i2 = i
        
        #print(f"i1: {i1} i2: {i2}")
        
        if i1 > i2:
            return S
        
        ca = [it for it in S]
        
        ca[i1], ca[i2] = ca[i2], ca[i1]
        
        ans = "".join(ca)

        
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        S=input()
        
        ob=Solution()
        print(ob.LargestSwap(S))
# } Driver Code Ends