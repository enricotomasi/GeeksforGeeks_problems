//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C)
    {
        //code here
        int dir = 1; // 0: up --- 1: right --- 2: down --- 3: left
        int x = 0;
        int y = 0;
        
        int ansX = 0; 
        int ansY = 0;
        
        while (true)
        {
            if (x >= R || y >= C || x < 0 || y < 0) return {ansX, ansY};
            
            ansX = x;
            ansY = y;
            
            if (matrix[x][y] == 1)
            {
                matrix[x][y] = 0;
                
                if (dir == 3) dir = 0;
                else          dir++;
            }
            
            if      (dir == 0) x--;
            else if (dir == 1) y++;
            else if (dir == 2) x++;
            else               y--;
        }
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends