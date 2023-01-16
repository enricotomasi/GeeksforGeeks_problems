//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n)
	{
	    // code here
	    int ord[n];
	    copy (arr, arr+n, ord);
	    sort (ord, ord+n);
	    
	    int start = 0;
	    int end = n-1;
	    
	    while (arr[start] == ord[start] && start < n-1) start++;
	    while (arr[end]   == ord[end]   && end >= 0   ) end--;
	   
	    if (start > n-1 || end <=0) return {0,0};
	    
	    return {start, end};
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
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends