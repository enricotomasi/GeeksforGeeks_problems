//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int distinctCount(int arr[], int n)
    {
        // code here
        for (int i=0; i<n; i++)
        {
            if (arr[i]<0) arr[i] = abs(arr[i]);
        }
        
        sort(arr, arr+n);
        
        int last = arr[0];
        int ans = 1;
        for (int i=1; i<n; i++)
        {
            if (arr[i] != last) ans++;
            last = arr[i];
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