from typing import List
class Solution:
    #Function to detect cycle in an undirected graph.
	def isCycle(self, V: int, adj: List[List[int]]) -> bool:
		#Code here

        m = {}
        for i in range(V):
            m[i] = adj[i]
            
        pl = {}  
        v = set()  
        queue = []  
        
        for it in m:
            
            if it not in v:
                queue.append((it, None))
                v.add(it)
                
                while queue:
                    n, p = queue.pop(0)
                    pl[n] = p
                    
                    for it2 in m[n]:
                        
                        if it2 not in v:
                            queue.append((it2, n)) 
                            v.add(it2)
                        
                        elif pl[n] != it2:
                            return True  
                            
        return False


#{ 
 # Driver Code Starts

if __name__ == '__main__':

	T=int(input())
	for i in range(T):
		V, E = map(int, input().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
			adj[v].append(u)
		obj = Solution()
		ans = obj.isCycle(V, adj)
		if(ans):
			print("1")
		else:
			print("0")

# } Driver Code Ends