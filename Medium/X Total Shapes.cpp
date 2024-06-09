//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void rec(vector<vector<char>> &grid, int n, int m, int x, int y)
    {
        if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] != 'X')
        {
            return;
        }
        
        grid[x][y] = '#';
        
        rec(grid, n, m, x + 1, y);
        rec(grid, n, m, x - 1, y);
        rec(grid, n, m, x, y + 1);
        rec(grid, n, m, x, y - 1);
    }


    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 'X')
                {
                    ans++;
                    rec(grid, n, m, i, j);
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
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends