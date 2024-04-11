//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    void rec(vector<vector<int>> &grid, vector<vector<bool>> &vis, int x, int y, int n, int m, int& ans)
    {
        ans++;
        vis[x][y] = true;
        
        int r[] = { -1, -1, 0, 1, 1,  1, 0, -1 };
        int c[] = {  0,  1, 1, 1, 0, -1,-1, -1 };
        
        for (int k = 0; k < 8; k++)
        {
            int xx = x + r[k];
            int yy = y + c[k];
            
            if (xx < n && yy < m && xx >= 0 && yy >= 0 && !vis[xx][yy] && grid[xx][yy] == 1)
            {
                rec(grid, vis, xx, yy, n, m, ans);
            }
        }
    }
        
    int findMaxArea(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        
        int temp = 0;
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    temp = 0;
                    rec(grid, vis, i, j, n, m, temp);
                    ans = max(temp, ans);
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
