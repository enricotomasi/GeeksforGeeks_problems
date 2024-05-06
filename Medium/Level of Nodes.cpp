//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	void rec(vector<int> adj[], int v, int node, int x, int temp, vector<int> vis, int &ans)
	{
	    //cout << endl << "# " << node << endl;
	    
	    if (node >= v || vis[node] == 1)
	    {
	        //cout << "out of range or visited! " << vis[node] << endl;
	        return;  
	    }
	    
	    vis[node] = 1;
	    
	    if (node == 0)
	    {
	        //cout << "bingo!, ans: " << ans << " temp: " << temp << endl;
	        ans = min(ans, temp);
	        return;
	    }
	    
	    int n = adj[node].size();
	    
	    //cout << "n: " << n << endl;
	    
	    for (int i = 0; i < n; i++)
	    {
	        rec(adj, v, adj[node][i], x, temp + 1, vis, ans);
	    }
	    
	}
	
	
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    if (X == 0)
	    {
	        return 0;
	    }
	    
	    int ans = INT_MAX;
	    
	    vector<int> vis(V, 0);
	    
	    rec(adj, V, X, X, 0, vis, ans);
	    
	    if (ans == INT_MAX)
	    {
	        return -1;
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends
