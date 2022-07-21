//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
    long long solve(int arr[], int n, int k)
    {
        // code here
        
        sort(arr, arr+n);
        
        long long uno = 0;
        long long due = 0;
        long long tre = 0;
        
        for (int i=0; i<n; i++)
        {
            uno += arr[i];
        }
        
        for (int i=0; i<k; i++)
        {
            due += arr[i];
        }

        sort(arr, arr+n, greater<int>());
        
        for (int i=0; i<k; i++)
        {
            tre += arr[i];
        }

        long long a = abs(due - (uno-due));
        long long b = abs(tre - (uno-tre));
        
        return max(a,b);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.solve(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends