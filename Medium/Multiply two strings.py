#User function Template for python3

class Solution:
    def multiplyStrings(self, s1, s2):
        # code here
        # return the product string
        num1 = 0
        c = 1
        
        for i in range(len(s1)-1, -1, -1):
            if s1[i] == "-":
                num1 = -num1
                break
            num1 += c * int(s1[i])
            
            c *= 10
        
        num2 = 0
        c = 1
        
        for i in range(len(s2)-1, -1, -1):
            if s2[i] == "-":
                num2 = -num2
                break
            num2 += c * int(s2[i])
            c *= 10
        
        ans = num1 * num2
        
        return ans
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(Solution().multiplyStrings( a.strip() , b.strip() ))

# } Driver Code Ends
