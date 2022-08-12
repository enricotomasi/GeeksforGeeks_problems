//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string isAdjacentSetBits(long long int n)
    {
        // code here
        string s = "";
        
        while (n)
        {
            long long int resto = n%2;
            s += to_string(resto);
            n/=2;
        }
        
        // cout << s << endl;
        
        for (int i=0; i<s.length()-1; i++)
        {
            if (s.at(i)=='1' && s.at(i+1) == '1') return "Yes";
        }
        
        return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isAdjacentSetBits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends