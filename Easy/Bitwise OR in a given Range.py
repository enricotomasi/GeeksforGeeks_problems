#User function Template for python3
def msb(n):
    ans = -1
    
    while n:
        n = n >> 1
        ans += 1
    
    return ans
    
class Solution:
	def findBitwiseOR(self, L, R):
		# code here
        ans = 0
        msbl = msb(L);
        msbr = msb(R);
        
        while msbl == msbr:
            v = 1 << msbl
            ans += v
            L -= v
            R -= v
            msbl = msb(L)
            msbr = msb(R)
        msbmax = max(msbl, msbr)
        temp = msbmax
        
        while temp >= 0:
            t2 =  1 << temp
            ans += t2
            temp -= 1
            
        return ans
        
        
        
        
		

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		L,R = input().split(' ')
		L = int(L)
		R = int(R)
		ob = Solution()
		ans = ob.findBitwiseOR(L,R)
		print(ans)

# } Driver Code Ends