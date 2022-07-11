// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int divSum(long long int n)
    {
        // code here
        long long ans = 1;
        
        for (int i=2; i<n; i++)
        {
            if (n%i == 0) ans+=i;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.divSum(n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends