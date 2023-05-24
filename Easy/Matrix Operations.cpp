//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix)
    {
        //code here
        int n = matrix.size();
        int m = matrix[0].size();
        
        // cout << n << ", " << m << endl;
        
        // 0 right
        // 1 down
        // 2 left
        // 3 up
        
        int pos = 0;
        
        int pn = 0;
        int pm = 0;
        
        int pnt = 0;
        int pmt = 0;
        
        while (pnt < n && pmt < m && pmt >= 0 && pnt >= 0) 
        {
            pn = pnt;
            pm = pmt;
            
            if (matrix[pn][pm] == 1)
            {
                matrix[pn][pm] = 0;
                pos++;
                pos %=4;
            }
            
            //cout << "dir: " << pos << "        " << pnt << ", " << pmt << endl;
            
            if      (pos == 0) pmt++;   // 0 right
            else if (pos == 1) pnt++;   // 1 down
            else if (pos == 2) pmt--;   // 2 left
            else if (pos == 3) pnt--;   // 3 up
            
        }
        
        //cout << pnt << " " << pmt << endl;
        
        return {pn, pm};
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
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends