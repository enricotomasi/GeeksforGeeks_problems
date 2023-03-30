//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:

	int minRemoval(int arr[], int n)
	{
        // code here
	    sort(arr, arr + n);
	    
        int m = 0;
        
        for (int i = 0; i <n; i++) 
        {
            int ind = upper_bound(arr, arr + n, arr[i] * 2) - arr;
            m = max(m, ind - i);
        }
        
        return n - m;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.minRemoval(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends