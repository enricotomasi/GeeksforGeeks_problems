//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int findValue(int X, int Y, int P)
    {
        // code here
        if (P%2 != 0)
        {
            return max(2*X,Y) / min(2*X,Y);
        }
    
    return max(X,Y) / min(X,Y);
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y, P;
        cin >> X >> Y >> P;
        Solution ob;
        cout << ob.findValue(X, Y, P) << "\n";
    }
}
// } Driver Code Ends