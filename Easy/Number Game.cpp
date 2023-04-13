//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    
    long long mcm(long long a, long long b)
    {
        if (b == 0) return a;
        return mcm(b, a%b);
    }

    long long mcd(long long a, long long b)
    {
        return (a * b) / mcm(a, b);
    }
    
    long long numGame(long long n)
    {
        // code here
        long long m = 1000000007;
        long long ans = 1;

        for (long long i = 1; i<=n; i++)
        {
            ans = mcd(ans, i);
            ans %= m;
        }
        
        return ans %m;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    }
    return 0;
}
// } Driver Code Ends