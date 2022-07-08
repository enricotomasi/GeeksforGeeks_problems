// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long isAmazing(long long n)
    {
        // code here
        
        int divisori = 0;
        
        for (int i=1; i<=n; i++)
        {
            if (n%i==0) divisori++;
            
            if (divisori >3) return 0;
        }
        
        if (divisori != 3) return 0;
        
        return 1;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.isAmazing(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends