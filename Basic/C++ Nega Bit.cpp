//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int negaBit(int F , int S)
    {
        // code here
        
        return F^S;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int F,S;

        cin>>F>>S;

        Solution ob;
        cout << ob.negaBit(F,S) << endl;
    }
    return 0;
}
// } Driver Code Ends