//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    
    int dp[1001][1001][2];
    
    int ric(int n, int k, int ultimo)
    {
        int m = 1000000007;
        
        if (n == 0 && k == 0) return 1;
        if (n < 0 || k < 0) return 0;

        if (dp[n][k][ultimo] != -1) return dp[n][k][ultimo] % m;
        if (ultimo == 1) return dp[n][k][ultimo] = (ric(n-1, k-1, 1) % m + ric(n-1, k, 0) % m) % m;

        return dp[n][k][ultimo] = (ric(n-1, k, 0) % m + ric(n-1,k,1) % m) % m; 
    }
  
    int countStrings(int n, int k)
    {
        //code here.
        
        memset(dp, -1, sizeof(dp));
        return ric(n, k, 0);
    }
 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        Solution ob;
        cout<<ob.countStrings(n,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends