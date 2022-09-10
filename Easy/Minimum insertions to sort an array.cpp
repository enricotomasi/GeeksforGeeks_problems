//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minInsertions(int arr[], int N) 
	{ 
	    // Your code goes here
	    
	    // Hint:
	    // We can solve this problem using dynamic programming.
	    // The main thing to observe is that moving an element doesn’t change the relative order
	    // of elements other than the element which is being moved.
	    // Now consider longest increasing subsequence (LIS) 
	    // in which equal element are also taken as part of the increasing sequence,
	    // now if keep the element of this increasing sequence as it is and move all other elements
	    // then it will take the least number of steps because we have taken longest subsequence which does not need to be moved.
	    // Finally, the answer will be the size of the array minus the size of the longest increasing subsequence.
	    
	    int ans = 0;
	    
	    int dp[N] = {};
	    dp[0] = 1;
	    
	    for (int i=1; i<N; i++)
	    {
	        dp[i] = 1;
	        for (int j=0; j<i; j++)
	        {
	           if (arr[i] >= arr[j] && dp[i] < dp[j]+1) dp[i] = dp[j]+1;
	        }
	    }
	    
	    int lis = 0;
	    
	    for (int i=0; i<N; i++)
	    {
	        lis = max(lis, dp[i]);
	    }
	    
	    // cout << "lis:" << lis << endl;
	    
	    return N-lis;
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
	    cout << ob.minInsertions(arr, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends