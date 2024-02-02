#User function template for Python

class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self, s):
        # Code here
        negative = False
        start = 0
        end = len(s)
        
        if end == 0:
            return -1
        
        if s[0] == "-":
            negative = True
            start = 1

        if end == 1 and negative == True:
            return -1 
        
        ans = 0
        
        sc = ""
        
        lead = True
        for i in range(start, end):
            c = s[i]
            n = ord(c)
            
            if n < ord("0") or n > ord("9"):
                return -1
            
            if c == "0" and lead:
                continue
            else:
                lead = False
                sc += c
        
        #print(f"sc: {sc}")
        
        end = len(sc)

        
        pot = 1
        for i in range(end):
            c = sc[i]
            n = ord(c) - ord("0")
            
            p = end - i - 1
            
            #print(f"\np: {p}")
        
            pw = pow(10, p) * n
            
            #print(f"pw: {pw}")
            
            ans += pw
            
            #print(f"ans: {ans}")
            

        if negative:
            return ans * -1
            
        return ans
            

#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        string = input().strip();
        ob=Solution()
        print(ob.atoi(string))
# } Driver Code Ends
