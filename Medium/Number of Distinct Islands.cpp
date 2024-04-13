//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
     void rec(vector<vector<int>> &grid, vector<vector<int>> & vis, vector<pair<int, int>> &is, int x, int y, int rx, int ry, int n, int m)
    {
        if (x < 0 || y < 0 || x >= n || y >= m)
        {
            return;
        }
        
        if (grid[x][y] == 0 || vis[x][y] == 1)
        {
            return;
        }
        
        vis[x][y] = 1;
        
        is.push_back({rx - x, ry - y});
        
        rec(grid, vis, is,  x + 1,  y,  rx, ry, n, m);
        rec(grid, vis, is,  x - 1,  y,  rx, ry, n, m);
        rec(grid, vis, is,  x,  y + 1,  rx, ry, n, m);
        rec(grid, vis, is,  x,  y - 1,  rx, ry, n, m);
        
    }
    
    int countDistinctIslands(vector<vector<int>>& grid) 
    {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        //cout << "n: " << n << " m: " << m << endl;
        
        vector<vector<int>> vis (n, vector<int> (m, 0));
        set<vector<pair<int, int>>> islands;
        
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 and vis[i][j] == 0)
                {
                    vector<pair<int, int>> is;
                    
                    rec(grid, vis, is, i, j, i, j, n, m);
                    islands.insert(is);
                }
                
            }
            
            
        }
        
        
        
        return islands.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends