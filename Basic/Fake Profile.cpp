// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}
// } Driver Code Ends


string solve(string a)
{
    // code here
    int mappa[256] = { };
    
    for (char c : a)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            mappa[(int)c]++;
        }
    }
    
    int unici = 0;
    for (int i = 0; i<256; i++)
    {
        if (mappa[i] >= 1) unici++;
    }
    
    //cout << unici << endl;
    
    if (unici%2!=0) return "HE!";
    return "SHE!";

}