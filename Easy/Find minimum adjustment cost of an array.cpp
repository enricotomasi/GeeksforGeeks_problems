//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	int minAdjustmentCost(int A[], int n, int target)
	{
	    // Your code goes here
	    int m = 100;
	    int dp[n][m + 1];
	    
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j <= m; j++)
	        {
    	        if (i == 0) dp[i][j] = abs(j - A[i]);
    	        else        dp[i][j] = INT_MAX;
	        }
	    }
	    
	    for (int i = 1; i < n; i++)
	    {
	        for (int j = 1; j <= m; j++)
	        {
	            for (int k = 1; k <= m; k++)
	            {
	                if (abs(j-k) > target) continue;
	                else                   dp[i][j] = min(dp[i][j], abs(j-A[i]) + dp[i-1][k]);
	            }
	            
	        }
	    }
	    
	    int ans = INT_MAX;
	    
	    for (int i = 0; i <= 100; i++)
	    {
	        ans = min(ans, dp[n-1][i]);
	    }
	    
	    return ans;
	}
		 

};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, k;
	    cin>>n >> k;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        cout << ob.minAdjustmentCost(a,n,k);	
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends