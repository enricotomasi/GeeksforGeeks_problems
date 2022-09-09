//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long countWays(int N) 
    {
        // code here
        long long m = pow(10,9)+7;
        long long  dp[N+1] = {};
        
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        
        for (int i=4; i<=N; i++)
        {
            dp[i] = (dp[i-1]+dp[i-3]+dp[i-4])%m;
        }
       
        return dp[N-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countWays(N) << endl;
    }
    return 0;
}
// } Driver Code Ends