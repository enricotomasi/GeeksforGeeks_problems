//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<int> visited(V, 0);
        visited[c] = 1;
        
        queue<int> queue;
        
        for (auto it : adj[c])
        {
            if (it != d)
            {
                queue.push(it);
            }
        }
        
        while (!queue.empty())
        {
            int temp = queue.front();
            queue.pop();
            
            if (temp == d)
            {
                return 0;
            }
            
            for (auto it : adj[temp])
            {
                if (!visited[it])
                {
                    queue.push(it);
                    visited[temp] = 1;
                }
            }
        }
        
        if (visited[d])
        {
            return 0;
        }
        
        return 1;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends