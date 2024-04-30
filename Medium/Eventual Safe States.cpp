//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    bool dfs(int temp[], int vis[], int path[], vector<int>adj[], int tv)
    {
        vis[tv] = 1;
        path[tv] = 1;
        
        for (auto it : adj[tv])
        {
            if (!vis[it])
            {
                if (dfs(temp, vis, path, adj, it))
                {
                    temp[it] = 0;
                    return true;
                }
            }
            else if (path[it] == 1)
            {
                temp[it] = 0;
                return true;
            }
        }
        
        path[tv] = 0;
        
        temp[tv] = 1;
        
        return false;
    }
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[])
    {
        // code here
        int visited[V] = {0};
        int path[V] = {0};
        int temp[V] = {0};
        
        vector<int> ans;
        
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfs(temp, visited, path, adj, i);
            }
        }
        
        for (int i = 0; i < V; i++)
        {
            if (temp[i] == 1)
            {
                ans.push_back(i);
            }
            
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
