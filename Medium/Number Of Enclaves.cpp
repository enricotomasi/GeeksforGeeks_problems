//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int numberOfEnclaves(vector<vector<int>> &grid)
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> queue;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i == 0 || i == n - 1 || j == 0 || j == m - 1) && grid[i][j] == 1) 
                {
                    grid[i][j] = 0;
                    queue.push({i, j});
                }
            }
        }
    
        int rows[] = {0,  0, 1, -1};
        int cols[] = {1, -1, 0,  0};
    
        while (!queue.empty())
        {
            int X = queue.front().first;
            int Y = queue.front().second;
            queue.pop();
    
            for (int k = 0; k < 4; k++)
            {
                int x = X + rows[k];
                int y = Y + cols[k];
    
                if (x >= 0  && y >= 0 && y < m && x < n && grid[x][y] == 1) 
                {
                    grid[x][y] = 0;
                    queue.push({x, y});
                }
            }
        }
    
        int ans = 0;
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    ans++;
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
