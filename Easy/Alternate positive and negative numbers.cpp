//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n)
	{
	    // code here
	    vector<int> positivi;
	    vector<int> negativi;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (arr[i] >= 0) positivi.push_back(arr[i]);
	        else             negativi.push_back(arr[i]);
	    }
	    
	    int m = max(positivi.size(), negativi.size());
	    
	    int j = 0;
	    for (int i=0; i<m; i++)
	    {
	        if (i < positivi.size())
	        {
	            arr[j] = positivi[i];
	            j++;
	        }
	        
	        if (i < negativi.size())
	        {
	            arr[j] = negativi[i];
	            j++;
	        }
	    }

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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends