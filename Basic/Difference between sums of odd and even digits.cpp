//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int oddAndEven(string S)
    {
        // code here
        int pari = 0;
        int dispari = 0;
        
        for (int i=0;i<S.length(); i++)
        {
            int digit = S.at(i) - '0';
            
            if (i%2 != 0) dispari += digit;
                     else pari    += digit;  
        }
        
        //cout << pari << " " << dispari << endl;
        
        if (pari != dispari) return 0;
        return 1;
        
        
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
        cout << ob.oddAndEven(S) << "\n";
    }
}
// } Driver Code Ends