//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int countWays(string S1, string S2)
    {
        // code here
        int n1 = S1.length();
        int n2 = S2.length();
        
        int dp[n2+1][n1+1];
        
        for (int i=0; i<=n2; i++)
        {
            for (int j=0; j<=n1; j++)
            {
                if      (i==0)                     dp[i][j] = 1;
                else if (j==0)                     dp[i][j] = 0;
                else if (S2.at(i-1) == S1.at(j-1)) dp[i][j] = dp[i][j-1]+dp[i-1][j-1];
                else                               dp[i][j] = dp[i][j-1];
            }
        }
        
        return dp[n2][n1];
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1;
        cin>>S2;
        
        Solution ob;
        cout<<ob.countWays(S1, S2)<<endl;
    }
    return 0;
}
// } Driver Code Ends