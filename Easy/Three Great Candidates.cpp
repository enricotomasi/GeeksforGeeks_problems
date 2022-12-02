//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) 
    {
        // code here
        if (n<3) return -1;
        
        sort(arr, arr+n);
        
        long long m1 = 1;
        long long m2 = 1;
        
        m1 *= arr[0];
        m1 *= arr[1];
        m1 *= arr[n-1];
        
        m2 *= arr[n-1];
        m2 *= arr[n-2];
        m2 *= arr[n-3];
        
        return max(m1, m2);
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends