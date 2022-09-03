//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            
            // Prendi n e dividilo in 3 parti n/2 n/3 n/4
            // Somma i 3 risultati e ridividili ricorsivamente
            // Trova la somma massima che può essere ottenuta sommando le parti divise
            
            // Used hint: dp[i] = Math.max(dp[i/2] + dp[i/3] + dp[i/4], i);
            
            int dp[n+1];
            dp[0] = 0;
            dp[1] = 1;
            
            for (int i=2; i<=n; i++)
            {
                dp[i] = max(i, ((int)dp[i/2] + (int)dp[i/3] + (int)dp[i/4]));
            }
            
            return dp[n];
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends