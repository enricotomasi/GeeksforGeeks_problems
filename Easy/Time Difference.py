#User function Template for python3

class Solution:
    def timeGap(self, st, et):
        # code here
        s = st.split(":")
        e = et.split(":")
        
        #print(s, "\n", e)
        
        ss = int(e[2]) - int(s[2])
        
        rem = False
        
        if ss < 0:
            ss %= 60
            rem = True
        else:
            rem = False
        
        m = int(e[1]) - int(s[1])

        if rem == True:
            m -= 1
        
        if m < 0:
            m %= 60
            rem = True
        else:
            rem = False
        
        h = int(e[0]) - int(s[0])
        
        if rem == True:
            h -= 1
        
        if h < 0:
            h += 24
        
        
        ans = ""
        
        if h <= 9:
            ans += "0"
        
        ans += str(h)
        
        ans += ":"
        
        if m <= 9:
            ans += "0"
            
        ans += str(m)
        
        ans += ":"
        
        if ss <= 9:
            ans += "0"
        
        ans += str(ss)
        
        
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        st = input()
        et = input()
        
        ob = Solution()
        print(ob.timeGap(st, et))
# } Driver Code Ends