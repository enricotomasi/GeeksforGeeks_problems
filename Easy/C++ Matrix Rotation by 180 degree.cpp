//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // Code here
        int n = matrix.size();
        
        int ir = 0;
        int ic = 0;
        
        int fr = n-1;
        int fc = n-1;
        
        int tot = n*n;
        
        int stop = floor(tot /2);
        
        
        for (int i=0; i<stop; i++)
        {
            int temp = matrix[ir][ic];
            matrix[ir][ic] = matrix[fr][fc];
            matrix[fr][fc] = temp;
            
            //cout << ir << ", " << ic << "  **** " << fr << ", " << fc << endl;
            
            if (ic >= n-1)
            {
                ir++;
                ic = 0;
            }
            else ic++;
            
            if (fc <= 0)
            {
                fr--;
                fc = n-1; 
            }
            else fc--;
            
        }
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends