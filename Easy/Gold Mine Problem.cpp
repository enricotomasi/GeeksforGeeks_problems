//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int dp[n][m];
        for(int i=0; i<n; i++) dp[i][0] = M[i][0];
        
        for(int i=1; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int r  = dp[j][i-1];
                int ru = (j==0)   ? 0 : dp[j-1][i-1];
                int rd = (j==n-1) ? 0 : dp[j+1][i-1];
                
                dp[j][i] = M[j][i] + max(r, max(ru, rd));
            }
        }
        
        int ans = INT_MIN;
        for(int i=0;i<n;i++) ans = max(ans,dp[i][m-1]);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends