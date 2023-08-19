#User function Template for python3

class Solution:
    def lcsK(self, k, st):
        # code here
        n = len(st)
        

        ans = -1
        zerin = 0
        zeri = 0
        passato = False
        
        for it in st:
            #print (f"it: {it}")
            if it == "0":
                #print ("it == 0")
                zeri +=1
                if not passato:
                    zerin += 1
            else:
                ans = max(ans, zeri)
                zeri = 0
                passato = True
        
        ans = max(ans, zeri)
        
        #print()
        #print(f"Zeri : {zeri}")
        #print(f"Zerin: {zerin}")
        #print(f"Ans  : {ans}")
        
        if st[0] != "0" or st[n-1] == "1":
            #print("st[0] != 0 and st[n-1] != 1")
            return ans
        
        if zerin == n:
            #print ("zerin == n")
            return ans * k
        
        #print("zeri + zerin")
        return max(ans, (zeri + zerin))
      
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        k = int(input())
        st = input()
        
        ob = Solution()
        print(ob.lcsK(k, st))
# } Driver Code Ends