//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:

    // hint 1 : For each cell find out the maximum value which can be upon reaching that cell.
    
   
    
    int zigzagSequence(int n, vector<vector<int>> M)
    {
        // code here
        int dp[n][n];
        
        for (int i=0; i<n ; i++)
        {
            for (int j=0; j<n; j++)
            {
                dp[i][j] = M[i][j];
            }
        } 
        
        for (int i=1; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                for (int k=0; k<n; k++)
                {
                    if(k == j) continue;
                    dp[i][j] = max(dp[i][j], M[i][j] + dp[i - 1][k]);
                }
            }
        }
        
        int ans =  0;
        
        for (int i=0; i<n; i++)
        {
            ans = max(ans, dp[n - 1][i]);
        }
        
        return ans;


    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> M(n, vector<int>(n, -1));
        for(int i = 0;i < n*n;i++)
            cin>>M[i/n][i%n];
        
        Solution ob;
        cout<<ob.zigzagSequence(n, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends