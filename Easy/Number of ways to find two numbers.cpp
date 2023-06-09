//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long numOfWays(int K)
    {
        // code here
        return (K/2)*(K%2+K-2)/2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K;
        
        cin>>K;

        Solution ob;
        cout << ob.numOfWays(K) << endl;
    }
    return 0;
}
// } Driver Code Ends