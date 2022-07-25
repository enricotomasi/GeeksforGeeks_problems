//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string isStringExist(vector<string> arr, int N, string S)
    {
        // code here
        for (int i=0; i<N; i++)
        {
            int diff = 0;
            string s = arr[i];
            if (s.length() != S.length()) continue;
            
            for (int j=0; j<s.length(); j++)
            {
                if (s.at(j) != S.at(j))
                {
                    diff++;
                }
            }
            
            if (diff == 1) return "True";
            
        }

        return "False";
  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++) {
            cin >> s;
            v.push_back(s);
        }
        string g;
        cin >> g;
        Solution ob;
        cout << ob.isStringExist(v, n, g) << "\n";
    }
    return 0;
}
// } Driver Code Ends