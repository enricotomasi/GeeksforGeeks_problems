//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
	int f(int i, int p[])
    {
        if (p[i] == i) return i;
        else           return f(p[i], p);
    }
    
    int unionf(int a, int b, int p[])
    {
        int a1 = f(a, p);
        int b1 = f(b, p);
        
        if (a1 == b1) return 0;
        
        p[b1] = a1;
        
        return 1;
    }
	
	
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    set<pair<int,int>> map;
        
        int p[V];
        for (int i = 0; i < V; i++) p[i] = i;
    
        for (int i = 0; i < V; i++)
        {
            for(auto it : adj[i])
            {
                int a = f(i, p);
                int b = f(it, p);
                
                if (map.find({i, it}) == map.end() && a == b) return 1;
        
                map.insert({i, it});
                map.insert({it, i});
                
                unionf(a, b, p);
            }
        }
        
        return 0;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends
