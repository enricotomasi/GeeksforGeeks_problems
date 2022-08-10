//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    int fourPointSquare(vector<vector<int>> points)
    {
        // code here
        vector<int> x;
        vector<int> y;
        
        for (auto v : points)
        {
            x.push_back(v[0]);
            y.push_back(v[1]);
        }
        
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        
        if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) return false;
        if (y[0] == y[1] && y[1] == y[2] && y[2] == y[3]) return false;
        
        for (int i=0; i<4; i++)
        {
            if (x[i] != y[i]) return false;
        }
        
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> points(4, vector<int>(2));
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 2; j++) cin >> points[i][j];
        Solution ob;
        cout << ob.fourPointSquare(points) << "\n";
    }
}
// } Driver Code Ends