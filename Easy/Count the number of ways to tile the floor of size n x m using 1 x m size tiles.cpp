//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int countWays(int n, int m)
	{
	    // Code here.
	    int M = pow(10,9)+7;
	    
	    int dp[n+1] {};
	    
	    for (int i=1; i<=n; i++)
	    {
	        if (i<m)       dp[i] = 1;
	        else if (i==m) dp[i] = 2;
	        else           dp[i] = (dp[i-1]+dp[i-m])%M;
	    }
	    
	    return dp[n];
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.countWays(n, m);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends