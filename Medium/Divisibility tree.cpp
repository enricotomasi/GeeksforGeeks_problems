//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
	int rec(int p, int v, vector<vector<int>>&adj, int &ans2)
	{
        int ans = 1;
        
        for (auto it : adj[v])
        {
           if (it != p)
           {
               int r = rec(v, it, adj, ans2);
               
               if (r % 2 == 0)
               {
                   ans2++;
               }
               
               ans += r;
            }
        }
        
        return ans;
   }
	
	int minimumEdgeRemove(int n, vector<vector<int>>edges)
	{
	    // Code here
	    int ans = 0;
        vector<vector<int>> adj(n + 1);
        
        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        rec(-1, 1, adj, ans);
        
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends
