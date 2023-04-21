//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void ric(vector<vector<int>> &grid, vector<vector<int>> &ans, vector<int> temp, int x, int y, int n, int m)
    {
        if (x >= n || y >= m)
        {
            if (x == n-1 && y >= m-1) ans.push_back(temp);
            return;
        }
        
        // cout << x << ", " << y << endl;
        
        temp.push_back(grid[x][y]);
        
        if (x < n-1) ric(grid, ans, temp, x+1, y, n, m);
        
        ric(grid, ans, temp, x, y+1, n, m);
        
    }
    
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<vector<int>> ans;
        
        vector<int> temp;
        
        ric(grid, ans, temp, 0, 0, n , m);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends