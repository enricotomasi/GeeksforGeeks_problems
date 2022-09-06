//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    int bellNumber(int n)
    {
       // Code Here
       int m = pow(10,9)+7;
       
       int dp[n][n];
       dp[0][0] = 1;
       
       for (int i=1; i<n; i++)
       {
           dp[i][0] = dp[i-1][i-1];
           
           for (int j=1; j<=i; j++)
           {
               dp[i][j] = (dp[i][j-1]+dp[i-1][j-1])%m;
           }
       }
       
       //for (int i=0; i<n; i++)
       //{
        //   for (int j=0; j<n; j++)
        //   {
        //      cout << dp[i][j] << " ";
        //   }
        //   cout << endl;
       //}
       //cout << endl;

       return dp[n-1][n-1];

    }
};


//{ Driver Code Starts.



int main()
{
    Solution obj;
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<obj.bellNumber(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends