#User function Template for python3

class Solution:
    def search(self, pattern, text):
        # code here
        ans = []
        
        np = len(pattern)
        nt = len(text)
        
        for i in range(nt):
            if text[i] == pattern[0]:
                if i <= nt - np:
                    ok = True
                    k = 1
                    
                    for j in range(i + 1, i + np):
                        #print(text[j], pattern[k])
                        if text[j] != pattern[k]:
                            ok = False
                            break
                        else:
                            k += 1
                    
                    if ok:
                        #print("Bingo!")
                        ans += [i + 1]
        
        #print(ans)
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
        for value in ans:
            print(value,end = ' ')
        print()
# } Driver Code Ends
