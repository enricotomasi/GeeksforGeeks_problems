//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
  public:
    
    bool ver (string& s, int inizio, int fine)
    {
        int tempFine = fine;
        
        while (inizio < tempFine)
        {
            if (s[inizio] != s[fine]) return false;
            inizio++;
            fine++;
        }
        
        return true;
    }
    
    int minOperation(string s)
    {
        // code here
        int n = s.size();
        int temp = INT_MIN;
        
        for (int i=0;i<n/2;i++)
        {
            if (ver(s, 0, i+1)) temp = i+1;
        }

        if (temp < 0) return n;
        return n - temp + 1;
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
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends