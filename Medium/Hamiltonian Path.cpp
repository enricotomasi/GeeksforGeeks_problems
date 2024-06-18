//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool rec(unordered_map<int, list<int>>& adj, vector<bool> vis, int curr, int n)
    {
        if (n == vis.size() - 1)
        {
            return true;
        }
        
        vis[curr] = true;
        
        n++;
        
        for (auto it: adj[curr])
        {
            if (!vis[it])
            {
                if (rec(adj, vis, it, n))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
    
    bool check(int N, int M, vector<vector<int>> Edges)
    {
        // code here
        unordered_map<int,list<int>> adj;
        
        for (int i = 0; i < M; i++)
        {
            adj[Edges[i][0]].push_back(Edges[i][1]);
            adj[Edges[i][1]].push_back(Edges[i][0]);
        }

        vector<bool> vis(N + 1, false);
        
        for (int i = 1; i <= N; i++)
        {
            if (rec(adj, vis, i, 1))
            {
                return true;
            }
        }
        
        return false;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends