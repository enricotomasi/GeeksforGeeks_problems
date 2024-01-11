//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    string removeKdigits(string S, int K)
    {
        int n = S.size();
        int er = 0;
        
        for (int i = 0; i < n ; i++)
        {
            if (er == K) break;

            if (S[i] > S[i + 1])
            {
                S.erase(S.begin() + i);
                i -= 2;
                er++;
            }
        }
        
        n = S.size();
        int l = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (S[i] != '0') break;
            l++;
        }
        
        S.erase(0, l);
        
        if (S.empty()) return "0";
        
        return S;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends
