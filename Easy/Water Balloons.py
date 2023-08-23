#User function Template for python3

class Solution:
    def sequence(self, st):
        # code here
        ans = ""
        
        last = "§"
        conta = 0
        
        for c in st:
            #print()
            #print(last, c)
            
            if last != c:
                conta = 1
                ans += c
                #print("diverso");
            else:
                #print(conta)
                if conta <= 1:
                    #print("beccato")
                    ans += c
                conta += 1
            
            last = c
            #print(ans)
            
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        st = input()
        
        ob = Solution()
        print(ob.sequence(st))
# } Driver Code Ends