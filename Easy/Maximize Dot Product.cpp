//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	int maxDotProduct(int n, int m, int A[], int B[]) 
	{ 
		// Your code goes here
		
		// Hint:
		// Another way to look at this problem is:
		// for every pair of elements element A[i] and B[j] where j >= i , we have two choices:
        //
        // We multiply A[i] and B[j] and add to the product (We include A[i]).
        // We exclude A[i] from product (In other words, we insert 0 at current position in B[])
		
		int dp[m+1][n+1] = {};
	    
	    for (int i=1; i<=m; i++)	
	    {
	        for (int j=1; j<=n; j++)
	        {
	            if (j>i) dp[i][j] = max(dp[i-1][j-1]+A[j-1]*B[i-1], dp[i][j-1]);
	            else     dp[i][j] = dp[i-1][j-1]+A[j-1]*B[i-1];
	        }
	    }
	    
	    for (int i=0; i<=m; i++)	
	    {
	        for (int j=0; j<=n; j++)
	        {
	            cout << dp[i][j] << " ";
	        }
	        cout << endl;
	    }
	    cout << endl;
	
		return dp[m][n];
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends