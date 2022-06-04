 
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k)
	{
	    // code here
	    
	    int mappa[n+1] = {};
	    
	    for (int i=0; i<n; i++)
	    {
	        mappa[arr[i]]++;
	    }
	    
	    int maxrip = -1;
	    
	    for (int i=0; i<n; i++)
	    {
	        maxrip = max(maxrip, mappa[i]);
	    }
	    
	    if (maxrip <0) return maxrip;
	    
	    int ans = INT_MAX;
	    for (int i=0; i<n; i++)
	    {
	        if (mappa[i] == maxrip)
	        {
	            ans = min(ans, i);
	        }
	    }
	    
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends