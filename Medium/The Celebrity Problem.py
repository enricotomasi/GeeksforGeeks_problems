#User function Template for python3

class Solution:
    
    #Function to find if there is a celebrity in the party or not.
    def celebrity(self, M, n):
        # code here
        cand = []
        
        for i in range(n):
            allz = True;
            for j in range(n):
                if M[i][j] != 0:
                    allz = False
                    break
            if allz == True:
                #print(f"cand: {i}")
                cand += [i]

        vip = -1
        
        for it in cand:
            v = True
            for i in range(n):
                if i != it and M[i][it] != 1:
                    v = False
                    break
            
            if v == True:
                return it
                
        
        
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t) :
        n = int(input())
        a = list(map(int,input().strip().split()))
        k = 0
        m = []
        for i in range(n):
            row = []
            for j in range(n):
                row.append(a[k])
                k+=1
            m.append(row)
        ob = Solution()
        print(ob.celebrity(m,n))
# } Driver Code Ends