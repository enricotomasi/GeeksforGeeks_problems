//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int smallestSubstring(string S)
    {
        // Code here
        int n = S.length();
        
        queue<int> z;
        queue<int> u;
        queue<int> d;
        
        for (int i=0; i<n; i++)
        {
            if      (S[i] == '0') z.push(i);
            else if (S[i] == '1') u.push(i);
            else if (S[i] == '2') d.push(i);
        }
        
        if (z.size() == 0 || u.size() == 0 || d.size() == 0) return -1;
        
        int ans = INT_MAX;
        int pz = -1;
        int pu = -1;
        int pd = -1;
        
        for (int i=0; i<n; i++)
        {
            if (pz < i)
            {
                if (z.empty()) continue;
                pz = z.front();
                z.pop();
            }
            
            if (pu < i)
            {
                if (u.empty()) continue;
                pu = u.front();
                u.pop();
            }
            
            if (pd < i)
            {
                if (d.empty()) continue;
                pd = d.front();
                d.pop();
            }
            
            int inizio = min(pz, min(pd, pu));
            int fine = max(pz, max(pd, pu));
            
            int finestra = fine-inizio + 1;
            
            ans = min(ans, finestra);
            
        }
        

        if (ans == INT_MAX) return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends