//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
        long long required(long long arr[], long long n, long long k) 
        {
            // Your code goes here
            long long m = 0;
            
            for (int i=0; i<n; i++)
            {
                m = max(m, arr[i]);
            }
            
            //cout << "massimo: " << m << " k: " << k << endl;
            
            if (m-k <= 0) return -1;
            
            return m-k;
            
            
        }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        cout << ob.required(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends