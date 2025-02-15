 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        // code here
        int u = 0;
        cin >> u;
        return u;
    }
    
    char cppCharType() {
        // code here
        char u;
        cin >> u;
        return u;
    }
    
    float cppFloatType() {
        // code here
        float u = 0;
        cin >> u;
        return u;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}  // } Driver Code Ends