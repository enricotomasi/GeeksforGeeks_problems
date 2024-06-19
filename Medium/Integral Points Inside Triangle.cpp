//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    long long int b(long long int a, long long int b, long long int c, long long int d)
    {
        return gcd(abs(c - a), abs(d - b)) + 1;
    }
    
    long long int gcd(long long int i, long long int j)
    {
        if (j == 0)
        {
            return i;
        }
        
        return gcd(j, i % j);
    }

    long long int InternalCount(long long int p[], long long int q[], long long int r[]) 
    {
        // code here
        return (abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1])) / 2) - (b(p[0], p[1], q[0], q[1]) + b(q[0], q[1], r[0], r[1]) + b(r[0], r[1], p[0], p[1]) - 3) / 2 + 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int p[2], q[2], r[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1];
        Solution ob;
        long long int ans = ob.InternalCount(p, q, r);
        cout << ans << "\n";
    }
}
// } Driver Code Ends