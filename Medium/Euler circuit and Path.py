class Solution:
	def isEulerCircuitExist(self, V, adj):
		#Code here
		# 2 Eulerian circuit -> Visit all nodes start and end in same node
		# 1 Eulerian path -> Visit all nodes start and end in different nodes
		# 0 None
		
		#print(adj)
		
		even = 0
		odd = 0
		
		for i in range(V):
		    if len(adj[i]) % 2 == 0:
		        even += 1
		    else:
		        odd += 1
		    
	    if even == V:
	        return 2
	    
	    if odd == 2:
	        return 1
	    
	    return 0


#{ 
 # Driver Code Starts


if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		V, E = map(int, input().strip().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
			adj[v].append(u)
		obj = Solution()
		ans = obj.isEulerCircuitExist(V, adj)
		print(ans)
# } Driver Code Ends
