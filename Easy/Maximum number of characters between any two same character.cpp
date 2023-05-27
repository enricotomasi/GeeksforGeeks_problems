//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxChars (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << maxChars (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int maxChars (string S)
{
    // your code here
    int n = S.length();
    unordered_map<char, pair<int, int>> mappa;
    
    for (int i=0; i<n; i++)
    {
        char c = S[i];
        
        if (mappa.find(c) == mappa.end())
        {
            mappa[c] = {i, -1};
        }
        else
        {
            mappa[c].second = i;
        }
    }
    
    int ans = -1;
    
    for (auto it : mappa)
    {
        if (it.second.second > 0)
        {
            int diff = it.second.second - it.second.first - 1;
            ans = max(ans, diff);
        }
    }
    
    return ans;
}