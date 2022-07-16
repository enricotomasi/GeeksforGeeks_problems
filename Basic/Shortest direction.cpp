//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string shortestPath (string S)
    {
        // your code here
        int h = 0;
        int v = 0;
        
        for (char c : S)
        {
            if (c=='N') v++;
            if (c=='S') v--;
            
            if (c=='W') h++;
            if (c=='E') h--;
        }
        
        string ans = "";
        
        if (h < 0)
        {
            for (int i=0; i<abs(h); i++)
            {
                ans += 'E';
            }
        }
        
        if (v > 0)
        {
            for (int i=0; i<v; i++)
            {
                ans += 'N';
            }
        }
        
        if (v < 0)
        {
            for (int i=0; i<abs(v); i++)
            {
                ans += 'S';
            }
        }
        
        if (h > 0)
        {
            for (int i=0; i<h; i++)
            {
                ans += 'W';
            }
        }
        
        return ans;
        
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
        cout << ob.shortestPath (s) << endl;
    }
}

// } Driver Code Ends