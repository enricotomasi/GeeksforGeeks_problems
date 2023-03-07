//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n)
	{
	    // code here
	    set<int> m1;
	    
	    for (int i=0; i<n; i++)
	    {
	        m1.insert(arr[i]);
	    }
	    
	    vector<int> mappa;
	    for (auto it : m1) mappa.push_back(it);
	    sort (mappa.begin(), mappa.end());
	    int l = mappa.size();
	    if (l >= 2) return mappa[l-2];
	    
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends