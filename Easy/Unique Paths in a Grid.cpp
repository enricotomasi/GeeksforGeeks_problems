//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    long ric(int a, int b, int n, int m, vector<vector<int>> &grid, vector<vector<long>> &dp)
    {
        int M = pow(10, 9) + 7;
        
        if (a == n - 1 && b == m - 1) return 1;
        if (a >= n || b >= m) return 0;
        if (dp[a][b] != -1) return dp[a][b];
        int count = 0;
        if (a + 1 < n && grid[a + 1][b] == 1) count += (ric(a + 1, b, n, m, grid, dp) % M);
        if (b + 1 < m && grid[a][b + 1] == 1) count += (ric(a, b + 1, n, m, grid, dp) % M);
        return dp[a][b] = count % M;
    }
    
    
    int uniquePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        int M = pow(10, 9) + 7;
        if (grid[0][0] == 0 || grid[n - 1][m - 1] == 0) return 0;
        vector<vector<long>> dp(n, vector<long>(m,-1));
        return (int)(ric(0, 0, n, m, grid, dp) % M);
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends