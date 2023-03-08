//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

bool metaStrings (string S1, string S2)
{
    // your code here
    if (S1 == S2)  return false;
    
    int n1 = S1.length();
    int n2 = S2.length();
    
    if (n1 != n2) return false;
    
    int mappa1[26] = {};
    int mappa2[26] = {};
    
    for (int i=0; i<n1; i++)
    {
        mappa1[S1[i] - 'a']++;
        mappa2[S2[i] - 'a']++;
    }
    
    bool jolly = true;
    for (int i=0; i<26; i++)
    {
        if (mappa1[i] != mappa2[i])
        {
            if (jolly) jolly = false;
            else return false;
        }
    }
    
    int diff = 0;
    for (int i=0; i<n1; i++)
    {
        if (S1[i] != S2[i]) diff++;
        if (diff > 2) return false;
    }
    
    
    return true;
}