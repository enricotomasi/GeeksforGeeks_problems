// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    int areAnagram(string S1, string S2)
    {
        // code here
        
        if (S1.length() != S2.length()) return false;
        
        int mappa1[256] = {};
        int mappa2[256] = {};
        
        for (auto c : S1)
        {
            mappa1[(int)c]++;
        }
        
        for (auto c : S2)
        {
            mappa2[(int)c]++;
        }
        
        for (int i=0; i<256; i++)
        {
            if (mappa1[i] != mappa2[i]) return false;
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}
  // } Driver Code Ends