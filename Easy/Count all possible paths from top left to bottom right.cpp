//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n)
    {
        // code here
        long long int mo = pow(10,9)+7;
        long long int dp[m][n] = {};
        
        for (int i=m-1; i>=0; i--)
        {
            for (int j=n-1; j>=0; j--)
            {
                if (i==m-1 || j==n-1) dp[i][j] = 1;
                else                  dp[i][j] = (dp[i+1][j]+dp[i][j+1])%mo;
            }
        }
        
        //for (int i=0; i<m; i++)
        //{
        //    for (int j=0; j<n; j++)
        //    {
        //        cout << dp[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        //cout << endl;
        
        return dp[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends