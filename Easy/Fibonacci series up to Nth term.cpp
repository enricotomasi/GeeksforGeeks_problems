//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    vector<int> Series(int n)
    {
        // Code here
        
        if (n == 0) return { };
        if (n == 1) return { 0, 1 };
        
        int m = 1000000007;
        vector<int> ans = { 0, 1};
        
        for (int i = 1; i < n; i++)
        {
            int l = ans.size();
            ans.push_back((ans[l - 1] + ans[l - 2]) % m);
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends