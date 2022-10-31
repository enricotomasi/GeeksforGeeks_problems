//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    int conv (char c)
    {
        switch (c)
        {
            case ('I'): return 1;
            case ('V'): return 5;
            case ('X'): return 10;
            case ('L'): return 50;
            case ('C'): return 100;
            case ('D'): return 500;
            case ('M'): return 1000;
            default:    return -1;
        }
    }
    
    int romanToDecimal(string &str)
    {
        // code here
        int n = str.length();
        int ans = 0;
        
        for (int i=0; i<n-1; i++)
        {
            int attuale    = conv(str[i]);
            int successiva = conv(str[i+1]);
            
            if (attuale >= successiva) ans += attuale;
            else                       ans -= attuale;
        }
        
        ans += conv(str[n-1]);
        return ans;
        
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends