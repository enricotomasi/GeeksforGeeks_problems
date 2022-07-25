//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string S)
{
    // your code here

    string hello  = "hello";
    int cur = 0;
    
    for (char c : S)
    {
        if (c == hello.at(cur)) cur++;
        if (cur >= 5) return true;
    }
    
    

    return false;
    
    
}