//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxLength(string S)
    {
        // code here
        int n = S.size();

        int dp[n];
        
        fill(dp, dp+n, 1);
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<i; j++)
            {
                if (S[i] > S[j]) dp[i] = max(dp[i], dp[j] +1);
            }
        }
        
        int ans = -1;
        
        for (int i=0; i<n; i++) ans = max(ans, dp[i]);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends