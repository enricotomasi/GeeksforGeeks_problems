//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
    int getCount(int X)
    {
        // code here
        return X-pow(2, __builtin_popcount(X))+1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X;
        cin >> X;
        Solution ob;
        cout << ob.getCount(X) << endl;
    }
    return 0;
}

// } Driver Code Ends