//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[W+1] = {};
        
        for (int peso=0; peso<=W; peso++)
        {
            for (int i=0; i<N; i++)
            {
                if (peso-wt[i] >=0)
                {
                    int preso    =  dp[peso - wt[i]] + val[i];
                    int nonpreso =  dp[peso];
                    
                    dp[peso] = max(preso, nonpreso);
                }
            }
        }
        
        // for (int i=0; i<=W; i++) cout << dp[i] << " ";
        // cout << endl;
        
        return dp[W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends