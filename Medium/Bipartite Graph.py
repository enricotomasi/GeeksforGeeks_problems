class Solution:
	def isBipartite(self, V, adj):
		#code here
		def check(adj, curr, last, m):
            
            if m[curr] != 0:
                return m[curr] == last
            
            m[curr] = last
            
            for it in adj[curr]:
                if not check(adj, it, -last, m):
                    return False
            
            return True
            
        n = len(adj)
        
        m = [0]*n
        
        for it in range(n):
            if m[it] == 0 and not (check(adj, it, 1, m)):
                return False
        
        return True

#{ 
 # Driver Code Starts

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		V, E = map(int, input().strip().split())
		adj = [[] for i in range(V)]
		for i in range(E):
			u, v = map(int, input().strip().split())
			adj[u].append(v)
			adj[v].append(u)
		obj = Solution()
		ans = obj.isBipartite(V, adj)
		if(ans):
			print("1")
		else:
			print("0")

# } Driver Code Ends