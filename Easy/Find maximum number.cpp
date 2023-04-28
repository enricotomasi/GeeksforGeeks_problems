//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string findMax(string N)
    {
        // code here
        int n = N.length();
        vector<char> v;
        
        for (int i=0; i<n; i++)
        {
            v.push_back(N[i]);
        }
        
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        string ans = "";
        
        for (int i=0; i<n; i++)
        {
            ans += v[i];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    }
    return 0;
}
// } Driver Code Ends