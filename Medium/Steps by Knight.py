from collections import deque

class Solution:

	#Function to find out minimum steps Knight needs to reach target position.
	def minStepToReachTarget(self, KnightPos, TargetPos, N):
		#Code here
		r = KnightPos[0] - 1
	    c = KnightPos[1] - 1
	    
	    q = deque([(r, c, 0)])
	    
	    targ = (TargetPos[0] -1, TargetPos[1] - 1)
	    v = set()
	    
	    moves = [(1, 2), (2, 1), (-1, 2), (-2, 1), (1, -2), (2, -1), (-1, -2), (-2,- 1)]
	    
	    while q:
	        rt, ct, temp = q.popleft()
	        
	        if (rt, ct) == targ:
	            return temp
	    
	        for it in moves:
	            
	            dr = it[0]
	            dc = it[1]
	            
	            rm = dr + rt
	            cm = dc + ct
	            
	            ri = 0 <= rm < N
                ci = 0 <= cm < N 
        
                if not ri or not ci:
                    continue
	            
	            if (rm, cm) not in v:
	                q.append((rm, cm, temp + 1))
	                v.add((rm, cm))
	        
	    return -1



#{ 
 # Driver Code Starts

T=int(input())
for i in range(T):
	N = int(input())
	KnightPos = list(map(int, input().split()))
	TargetPos = list(map(int, input().split()))
	obj = Solution()
	ans = obj.minStepToReachTarget(KnightPos, TargetPos, N)
	print(ans)

# } Driver Code Ends