//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int longestSubsequence(int n, int arr[])
    {
        // code here
        int dp[n] = {};
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (abs(arr[i]-arr[j])==1) dp[i] = max(dp[i],dp[j]+1);
            }
        }
        
        int ans = 0;
        for (int i=0; i<n; i++)
        {
            ans = max(ans, dp[i]);
            // cout << dp[i] << " ";
        }
        // cout << endl;
        
        return ans == 0 ? 1 : ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends