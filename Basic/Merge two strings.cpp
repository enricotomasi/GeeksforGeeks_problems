 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    string ans = "";

    int l1 = S1.length();
    int l2 = S2.length();
    
    int mas = 0;
    
    if (l1>l2) mas = l1;
    else mas = l2;
    
    for (int i=0; i<mas; i++)
    {
        if (i<l1) ans += S1.at(i);
        if (i<l2) ans += S2.at(i);
    }
    
    
    return ans;
    
    
}