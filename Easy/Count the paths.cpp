//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int possible_paths(vector<vector<int>>edges, int n, int s, int d)
	{
	    // Code here
	    
	    if (s==d) return 1;
	    
	    int ans = 0;
	    int ni = edges.size();
	    
	    for (int i=0; i<ni; i++)
	    {
	        if (edges[i][0] == s) ans += possible_paths(edges, n, edges[i][1],d);
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends