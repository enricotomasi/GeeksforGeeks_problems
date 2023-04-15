//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> FindExitPoint(vector<vector<int>>&matrix)
    {
		// Code here
		
		//               N (3)
		//          
		//          O (2)    E (0)
		//
		//              S (1)
		
		int n = matrix.size();
		int m = matrix[0].size();
		
		// cout << "Dimensioni: " << n << ", " << m << endl;
		
		int x = 0; 
		int y = 0;
		
		int pos = 0;
		
		if (matrix[0][0] == 1)
		{
		    pos = 1;
		    matrix[0][0] = 0;
		}
		
		while (true)
		{
		    //cout << x << ", " << y << ": " << matrix[x][y] << " *** pos: " << pos << endl;
		    
		    int tempX = x;
		    int tempY = y;
		    
		    if      (pos == 0) tempY++;
		    else if (pos == 1) tempX++;
		    else if (pos == 2) tempY--;
		    else if (pos == 3) tempX--;
		    
		    if (tempX < 0 || tempX >= n || tempY < 0 || tempY >= m) return {x, y};
		    
		    x = tempX;
		    y = tempY;
		    
		    if (matrix[x][y] == 1)
		    {
		        pos++;
		        if (pos > 3) pos = 0;
		        matrix[x][y] = 0;
		    }
		}
		
		return {-1, -1};
		
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int> ans = obj.FindExitPoint(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends