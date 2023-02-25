//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	
	/* Returns count of pairs with difference k in arr[] of size n. */

	int countPairsWithDiffK(int arr[], int n, int k)
	{
	    // code here
	    int ans = 0;
	    unordered_map<int, int> mappa;
	    
	    for (int i=0; i<n; i++)
	    {
	        mappa[arr[i]]++;
	    }
	    
	    for (int i=0; i<n; i++)
	    {
	        int temp = arr[i] + k;
	        
	        if (k == 0)
	        {
	            if (mappa.find(temp) != mappa.end())
	            {
	                ans += mappa[temp] -1;
	                mappa[temp]--;
	            }
	            continue;
	        }
	        
	        if (mappa.find(temp) != mappa.end())
	        {
	            ans += mappa[temp];
	        }
	        
	    }
	    
        return ans;	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends