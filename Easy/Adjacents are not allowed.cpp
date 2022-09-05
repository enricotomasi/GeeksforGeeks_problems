//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSum(int N, vector<vector<int>> mat)
    {
        // code here
        
        // Hint: Try out all possible combinations and find the best one. Use memoization for time optimization.
        
        int dp[N+1] = {};
        
        dp[1] = max(mat[0][0], mat[1][0]);
        dp[2] = max(dp[1], max(mat[0][1], mat[1][1]));
        
        for (int i=3; i<=N; i++)
        {
            int a = max(mat[0][i-1], mat[1][i-1]);
            dp[i] = max(a+dp[i-2],dp[i-1]);
        }
        
        //for (int i=0; i<=N; i++)
        //{
        //    cout << dp[i] << " ";
        //}
        //cout << endl;
        
        return dp[N];
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> mat(2, vector<int>(N, 0));
        for(int i = 0;i < 2; i++){
            for(int j = 0; j < N; j++)
                cin>>mat[i][j];
        }
        
        Solution ob;
        cout<<ob.maxSum(N, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends