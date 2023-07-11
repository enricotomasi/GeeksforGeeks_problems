
#User function Template for python3

class Solution:
    def nonRepetitive(self, s):
        # code here
        if len(s) == 1:
            return 1
        
        mappa = dict()
        
        for it in s:
            if it in mappa:
                mappa[it] += 1
            else:
                mappa[it] = 1
        
        for it in mappa:
            attivo = False
            conta = mappa[it]
            ok = True   
            
            if conta > 1:
                for i in s:
                    if conta <= 0:
                        break
                    
                    if not attivo:
                        if i == it:
                            attivo = True
                            conta -=1
                    else:
                        if i != it:
                            return 0
                        else:
                            conta -=1
                
                #print (it, ok)
                
        
        return 1
                
                
         

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        if ob.nonRepetitive(s):
            print(1)
        else:
            print(0)
# } Driver Code Ends