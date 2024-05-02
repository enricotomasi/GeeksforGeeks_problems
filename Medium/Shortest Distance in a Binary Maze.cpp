//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) 
    {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        int x = source.first;
        int y = source.second;
        
        int dx = destination.first;
        int dy = destination.second;
        
        vector<vector<int>> v (n, vector<int>(m, INT_MAX));
        
        v[x][y] = 0;
        
        queue<pair<int, pair<int,int>>> queue;
        
        queue.push({0, {x, y}});
        
        int rows[] = { 0,  0, 1, -1};
        int cols[] = { 1, -1, 0,  0};
        
        while (!queue.empty())
        {
            int tx = queue.front().second.first;
            int ty = queue.front().second.second;
            
            int temp = queue.front().first;
            
            queue.pop();
            
            for (int i = 0; i < 4; i++)
            {
                int ttx = tx + rows[i];
                int tty = ty + cols[i];
                
                if (ttx >= 0 && ttx < n && tty >= 0 && tty < m && temp + 1 < v[ttx][tty] && grid[ttx][tty] == 1)
                {
                    if (ttx == dx && tty == dy)
                    {
                        return temp + 1;
                    }
                    
                    v[ttx][tty] = temp + 1;
                    queue.push( {1 +temp, { ttx, tty } } );
                }
            }
        }
        
        if (x == dx && y == dy)
        {
            return 0;
        }
        
        return -1;

        
        
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

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
