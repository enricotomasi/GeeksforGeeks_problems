#User function Template for python3

class Solution:
    def recamanSequence(self, n):
        # code here
        used = set()
        used.add(0)
        
        ans = [0]
        
        last = 0
        
        for i in range(1, n + 1):
            lastmin = last - i
            
            #print(f"i: {i}  ---   last: {last}  ---  lastmin: {lastmin}  ---  lastplus: {last + i}")
            
            if lastmin > 0 and lastmin not in used:
                used.add(lastmin)
                ans.append(lastmin)
                last = lastmin
            else:
                lastmax = last + i
                used.add(lastmax)
                ans.append(lastmax)
                last = lastmax
                
            #print(ans, "\n")
        
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.recamanSequence(n)
        for i in range(n):
            print(ans[i],end=" ")
        print()
# } Driver Code Ends