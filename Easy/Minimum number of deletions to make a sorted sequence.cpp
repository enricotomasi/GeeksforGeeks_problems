//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    
	    // Used hint:
	    // -->arr be the given array.
        // -->n number of elements in arr.
        // -->len be the length of longest
        // increasing subsequence in arr.
        // --> minimum number of deletions
        // min = n - len
        
        if (n <= 1) return 0;
        int ans = 0;
        
        int dp[n];
        dp[0] = 1;
        
        for (int i=1; i<n; i++)
        {
            int m = 0;
            for (int j=0; j<i; j++)
            {
                if (arr[i] > arr[j])
                {
                    m = max(m,dp[j]);
                }
            }
            dp[i] = m+1;
            ans = max(ans, m+1);
            
        }
        
        return n-ans;
        
        
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends