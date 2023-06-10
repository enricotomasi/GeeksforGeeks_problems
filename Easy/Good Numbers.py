#User function Template for python3

class Solution:
    def goodNumbers(self, L, R, D):
        #code here
        ans = []

        for i in range(L, R+1):
            somma = 0
            temp = i

            while i != 0:
                 digit = i %10
                 if digit == D:
                     break

                 somma += digit
                 numero = i//10
                 if numero != 0 and somma >= numero %10:
                   break
                 i = numero 

            if i == 0:
                ans.append(temp)

        return ans  


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        L,R,D=map(int,input().strip().split())
        ob=Solution()
        ans=ob.goodNumbers(L,R,D)
        for i in ans:
            print(i,end=" ")
        print()
# } Driver Code Ends