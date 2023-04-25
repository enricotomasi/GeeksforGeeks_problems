//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution
{
  public:
    string oddEven(string S) 
    {
        // code here
        int n = S.length();
        map<char, int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[S[i]]++;
        }
        
        
        int x = 0;
        int y = 0;
        
        for (auto it : mappa)
        {
            int c = it.first - 'a' + 1;
            if (it.second %2 == 0 && c %2 == 0) x++;
            if (it.second %2 != 0 && c %2 != 0) y++;
        }
        
        if ((x+y) %2 == 0) return "EVEN";
        
        return "ODD";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends