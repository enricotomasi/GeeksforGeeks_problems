//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string getCrazy (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << getCrazy (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


string getCrazy (string S)
{
    // your code here
    string ans = "";
    bool upper = false;
    if (S.at(0) >= 65 && S.at(0) <= 90) upper = true;
    
    for (char c : S)
    {
        if (upper) ans += toupper(c);
        else ans += tolower(c);
        upper = !upper;
    }
    
    return ans;
}