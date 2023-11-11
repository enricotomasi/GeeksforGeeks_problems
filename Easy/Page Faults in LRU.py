#User function Template for python3

class Solution:
    def pageFaults(self, n, c, pages):
        # code here
        ans = 0
        mem = [-1] * c
        
        for it in pages:
            #print (it, "   ", mem)
            if it in mem:
                temp = list(mem)
                mem = []
                
                for it2 in temp:
                    if it2 != it:
                        mem += [it2]
                
                mem += [it]
            
            else:
                mem = mem [1:]
                mem += [it]
                ans += 1
        
            #print(ans, " ################")
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        pages = input().split()
        for itr in range(N):
            pages[itr] = int(pages[itr])
        C = int(input())

        ob = Solution()
        print(ob.pageFaults(N, C, pages))

# } Driver Code Ends