//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int kthDistinct(long long int A, long long int B)
    {
        // code here
        
        return A/B >= B/2;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int A, B;
        cin >> A >> B;
        // string s;
        // cin>>s;
        Solution ob;
        cout << ob.kthDistinct(A, B) << endl;
    }
    return 0;
}

// } Driver Code Ends