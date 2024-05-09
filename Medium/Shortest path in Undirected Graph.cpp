//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src)
    {
        // code here
        
        vector<int> ans(N, -1);
        ans[src] = 0;
           
        queue<int> queue;
        vector<int> m[N];
        
        unordered_map<int, bool> vis;
        vis[src] = true;
        queue.push(src);
        
        for (int i = 0; i < M; i++)
        {
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        
        while (!queue.empty())
        {
            int temp = queue.front();
            queue.pop();
            
            for (auto it : m[temp])
            {
                if (!vis[it])
                {
                    vis[it] = true;
                   
                    ans[it] = ans[temp] + 1;
                    queue.push(it);
                }
               
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
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
