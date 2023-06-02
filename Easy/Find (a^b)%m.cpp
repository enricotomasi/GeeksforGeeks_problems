//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:

    long long powerMod(string a, long long b, long long m)
    {
        // code here
        int n = a.length();
        long long temp = 0;
        
        for (int i=0; i<n; i++)
        {
            temp = (temp *10 + (a[i] - '0'));
            temp %= m;
        }
        
        long long ans = 1;
        
        if (temp == 0) return temp;
        
        while (b > 0)
        {
            if (b & 1) ans = (ans*temp) %m;
            b >>= 1;
            temp = (temp*temp) %m;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        long long b,m;
        
        cin>>a>>b>>m;

        Solution ob;
        cout << ob.powerMod(a,b,m) << endl;
    }
    return 0;
}
// } Driver Code Ends