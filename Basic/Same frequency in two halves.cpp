//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
    bool passed (string s)
    {
        //code here.
        int n = s.length();
        int meta = n/2;
        int metainizio = n%2 != 0 ? (n/2)+1 : n/2;
        
        string s1 = s.substr(0,meta);
        string s2 = s.substr(metainizio, meta);
        
        int mappa1[256] = {};
        int mappa2[256] = {};
        
        for (int i=0; i< s1.length(); i++)
        {
            mappa1[s1.at(i)]++;
        }
        
        for (int i=0; i< s2.length(); i++)
        {
            mappa2[s2.at(i)]++;
        }
        
        for (int i=0; i<256; i++)
        {
            if (mappa1[i] != mappa2[i]) return false;
        }
        
        return true;
        
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        if (ob.passed (s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// } Driver Code Ends