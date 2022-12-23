//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    long long reversedBits(long long X)
    {
        // code here
        string binario = bitset<32>(X).to_string();
        int n = binario.length();
        
        long long ans = 0;
        int p = 0;
        for (int i=0; i<n; i++)
        {
            // cout << binario[i] << " " << binario[i] - '0' << endl;
            ans += (binario[i] - '0') * pow (2, p);
            p++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends