// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r)
	{
	    // code here
	    vector<int> sub = { };
	    
	    for (int i=l-1; i<r; i++)
	    {
	        sub.push_back(arr[i]);
	    }
	    
	    int j = sub.size()-1;
	    for (int i=l-1; i<r; i++)
	    {
	        arr[i] = sub[j];
	        j--;
	    }
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> l >> r;
        Solution ob;
        ob.reverseSubArray(arr, n, l, r);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends