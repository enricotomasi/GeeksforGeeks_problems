//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int fun(string s, int k, int n, char c) 
    {
        // code here
        vector<int> pos;
        int occ = 0;
        
        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == c)
            {
                pos.push_back(i);
                occ++;
            }
        }
        
        int intere = n / s.length();
        int rimanenti = n % s.length();
        
        int ans = occ * intere;
        
        for (int i=0; i<pos.size(); i++)
        {
            if (pos[i] < rimanenti) ans++;
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t, i, n, k;
    char c;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cin >> k >> n >> c;
        Solution ob;
        cout << ob.fun(s, k, n, c) << endl;
    }
    return 0;
}

// } Driver Code Ends