//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size(); 
        int m = grid[0].size(); 

        queue<pair<int,int>> q;  

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});  
                    grid[i][j] = 0;  
                }
            }
        }

        while (!q.empty())
        {
            auto p = q.front();  
            q.pop();  

            for (int i = 0; i < 4; i++)
            {
                int x = p.first;  
                int y = p.second;
                
                if      (i == 0) x++;
                else if (i == 1) x--;
                else if (i == 2) y++;
                else             y--;

                if (x >= 0 && x < n && y >= 0 && y < m)
                {
                    if      (grid[x][y] == 3) q.push({x, y});  
                    else if (grid[x][y] == 2) return true; 
                }
            }
        }
        
        return false;  
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends