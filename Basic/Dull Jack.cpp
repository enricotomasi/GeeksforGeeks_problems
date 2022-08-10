//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long nthDayPage(long long N, long long K)
    {
        // code here
        long long M = pow(10,9) +7;
        
        long long ans = 1;
        
        for (long long i=1; i<N; i++)
        {
            ans = (ans*K) %M;
        }
        
        return ans%M;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N, K;
        cin >> N >> K;
        Solution ob;
        cout<<ob.nthDayPage(N, K)<<endl;
    }
    return 0;
}

// } Driver Code Ends