//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int MinimumExchange(vector<vector<char>>matrix)
    {
        // Code here
        int x = matrix.size();
        int y = matrix[0].size();
        
        int c1 = 0 ;
        int c2 = 0 ;
        
        bool ab = true;
	
        for  (int i = 0; i < x; i++)
        {
            bool abint = ab ;
            for(int j = 0; j<y; j++)
            {
                if ((abint && matrix[i][j] == 'B') || (!abint && matrix[i][j] == 'A')) c1++;
                if ((abint && matrix[i][j] == 'A') || (!abint && matrix[i][j] == 'B')) c2++;
                abint = !abint ;
            }
            ab = !ab;
        }
        
        int ans = min(c1 , c2);

        if (ans%2 == 0) return ans/2;

        return min(ans, (x*y- ans)/2);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>matrix(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MinimumExchange(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends