//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int partZero = 0;
    int partUno = 0;
    bool zero = true;
    
    for (char c : S)
    {
        if (zero)
        {
            if (c == '1') partZero++;
            else          partUno++;
        }
        else
        {
            if (c == '0') partZero++;
            else          partUno++;
        }
        zero = !zero;
    }
    
    return min(partZero, partUno);
    
}