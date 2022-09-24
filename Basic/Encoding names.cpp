//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string encodeTheName(string S)
    {
        // code here
        string ans = "";
        int n = S.length();
        
        int offset = 10;
        for (int i=0; i<n; i++)
        {
            int c = S[i] - offset;
            ans += to_string(c);
            //if (offset == 0) offset = 10;
            offset--;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        cout << ob.encodeTheName(S) << endl;
    }
    return 0;
}
// } Driver Code Ends