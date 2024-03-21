//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    vector<vector<int>> ans(n,vector<int>(m, -1));
	    queue<pair<int,int>> q;
	    
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < m; j++)
	        {
	            if (grid[i][j] == 1) 
	            {
	                q.push({i, j});
	                ans[i][j] = 0;
	            }
	        }
	    }
	    
	    int rows[] = {0, 0, 1, -1};
	    int cols[] = {1, -1, 0 , 0};
	    
	    int level = 0;
	    
	    while (!q.empty())
	    {
	        int qn = q.size();
	        for (int i=0; i < qn; i++) 
	        {
	            int xx = q.front().first;
	            int yy = q.front().second;
	            
	            q.pop();
	            
	            for (int k = 0; k < 4; k++)
	            {
	                int x = xx + rows[k];
	                int y = yy + cols[k];
	                
	                if (x < 0 || y < 0 || x >= n || y >= m || ans[x][y] != -1)
	                {
	                    continue;
	                }
	                
	                q.push({x, y});
	                
	                ans[x][y] = ans[xx][yy] + 1;
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
