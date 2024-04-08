//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution
{
    public:
    long long rec(int i, int j, int arr[], vector<vector<long long>> &dp)
    {
        if (i > j)
        {
            return 0;
        }
        
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        long long a = arr[i] + min(rec(i + 1, j - 1, arr, dp), rec(i + 2, j, arr, dp));
        long long b = arr[j] + min(rec(i + 1, j - 1, arr, dp), rec(i, j - 2, arr, dp));
        
        dp[i][j] = max(a, b);
        
        return dp[i][j];
    }
    
    long long maximumAmount(int n, int arr[])
    {
        // Your code here
        vector<vector<long long>> dp(n,vector<long long>(n, -1));
        
        return rec(0, n - 1, arr, dp);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends