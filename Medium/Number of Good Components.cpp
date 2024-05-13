//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution
{
  public:
   void rec(int temp, vector<int> adj[], vector<int> &v, vector<bool> &vis)
   {
        v.push_back(temp);
        vis[temp] = true;
        
        for (auto it: adj[temp])
        {
            if (!vis[it])
            {
                rec(it, adj, v, vis);
            }
        }
    }
    
    
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) 
    {
        // code here
        int ans = 0;
        vector<int> adj[v + 1];
        
        for (auto it: edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<bool> vis(v + 1, false);
        
        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                vector<int> v;
                
                rec(i, adj, v, vis);
                
                bool ok = true;
                
                for (int j = 0; j < v.size(); j++)
                {
                    if (adj[v[j]].size() < v.size() - 1)
                    {
                        ok = false;
                        break;
                    }
                }
                
                if (ok) ans++;
            }
            
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends
