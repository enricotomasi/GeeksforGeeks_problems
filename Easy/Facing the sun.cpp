//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n)
	{
	    // code here
	    int sole = h[0];
	    int ans = 1;
            
        for(int i=0; i<n; i++)
        {
            if(h[i] > sole)
            {
                ans++;
                sole= h[i];
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
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        Solution ob;
        auto ans = ob.countBuildings(h, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends