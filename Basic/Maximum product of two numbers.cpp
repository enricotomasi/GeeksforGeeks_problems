 
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int maxProduct(int arr[], int n)
	{
	    // code here
	    
	    int m1 = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        m1 = max(m1,arr[i]);
	    }
	    
	    int m2=0;
	    bool trovato = false;
	    for (int i=0; i<n; i++)
	    {
	        if (m1 == arr[i] && !trovato)
	        {
	            trovato = true;
	        }
	        else
	        {
	            m2 = max(m2, arr[i]); 
	        }
	        
	    }
	    
	    
	    return m1*m2;
	    
	}
};

// { Driver Code Starts.

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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends