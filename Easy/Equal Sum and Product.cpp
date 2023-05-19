//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n)
	{
	    // code here
	    int ans = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        int somma = arr[i];
	        int prodotto = arr[i];
	        ans++;
	        
	        for (int j=i+1; j<n; j++)
	        {
	            somma += arr[j];
	            prodotto *= arr[j];
	            if (somma == prodotto)
	            {
	                //cout << i << " " << j << endl;
	                ans++;
	            }
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
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends