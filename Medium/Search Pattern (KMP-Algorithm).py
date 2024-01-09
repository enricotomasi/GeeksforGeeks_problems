#User function Template for python3

class Solution:
    def search(self, pat, txt):
        # code here
        ans = []
        
        nt = len(txt)
        np = len(pat)
        
        for i in range(nt):
            if txt[i] == pat[0]:
                ind = i + 1
                find = True
                #print(f"First index found: {ind}")
                
                k = 1
                for j in range(i + 1, i + np):
                    if j >= nt:
                        #print("j > np")
                        find = False
                        break
                    
                    #print(f"txt[{j}] = {txt[j]} pat[{k}] = {pat[k]}")
                    
                    if txt[j] != pat[k]:
                        #print("Char not equal")
                        find = False
                        break
                    k += 1  
                
                if find == True:
                    ans += [ind]
        
        return ans
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        patt = input().strip()
        ob = Solution()
        ans = ob.search(patt, s)
        if len(ans)==0:
            print(-1,end="")
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends
