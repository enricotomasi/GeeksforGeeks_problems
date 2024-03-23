//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word)
	{
	    // Code here
	    vector<vector<int>> ans;
	    
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    int nw = word.size();
	    
	    //cout << "n: " << n << " m: " << m << " word: " << word << " nw: " << nw << endl;
	    
	    vector<int> x = {  1, 1, 1, 0, -1, -1, -1,  0 };
	    vector<int> y = { -1, 0, 1, 1,  1,  0, -1, -1 };
	    
	    
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < m; j++)
	        {
	            if (grid[i][j] == word[0])
	            {
	                
	                for (int k = 0; k < 8; k++)
	                {
	                    bool ok = true;
	                    for (int l = 1; l < nw; l++)
	                    {
	                        int nx = i;
	                        int ny = j;
	                        
	                        for (int q = 0; q < l; q++)
	                        {
	                            nx += x[k];
	                            ny += y[k];
	                        }
	                        
	                        //cout << "k: " << k << " l:" << l << " nx: " << nx << " ny: " << ny << endl;
	                        
	                        if (nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != word[l])
	                        {
	                            ok = false;
	                            break;
	                        }
	                    }
	                    if (ok)
	                    {
	                        ans.push_back({i, j});
	                        break;
	                    }
	                }
	                
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends