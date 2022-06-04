// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k)
    {
        // Your code goes here
        
        vector<int> A = {};
        vector<int> B = {};
        
        for (int i=0; i<n; i++)
        {
            A.push_back(a[i]);
            B.push_back(b[i]);
        }
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        reverse(B.begin(), B.end());
        
        
        for (int i=0; i<n; i++)
        {
            //cout  << A[i] << " " << B[i] << " --- " << (A[i] + B[i]) << " " << k << endl;
            if ((A[i] + B[i]) < k) return false;
        }
        
        
        //cout << "-------------" << endl;
        return true;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends