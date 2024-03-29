//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int dp[m+1][n+1] = {};
        
        for (int i=1; i<=m; i++)
        {
            for (int j=1; j<=n; j++)
            {
                if (X[i-1] == Y[j-1]) 
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        //for (int i=0; i<=m; i++)
        //{
        //    for (int j=0; j<=n; j++)
        //    {
        //        cout << dp[i][j] << " ";
        //    }
        //    cout << endl;
        //}
        //cout << endl;
        
        int lcs = dp[m][n];
        
        return n+m - lcs;
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends