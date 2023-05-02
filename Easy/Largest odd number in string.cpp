//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string maxOdd(string s)
    {
        // your code here
        int n = s.length(); 
        
        for (int i=n-1; i>=0; i--)
        {
            //cout << (s[i] - '0') % 2 << endl;
            if ((s[i] - '0') %2 != 0)
            {
                return s.substr(0, i+1);
            }
        }
        
        
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends