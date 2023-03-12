//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    int distinctCount(int arr[], int n)
    {
        // code here
        set<int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa.insert(abs(arr[i]));
        }
        
        return mappa.size();
        
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
        auto ans = ob.distinctCount(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends