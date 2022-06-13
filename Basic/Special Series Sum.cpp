// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    long long int sumOfTheSeries(long long int n)
    {
        // code here
        int ans = 0;
        for (int i=0; i<=n; i++)
        {
            for (int j=0; j<=i; j++)
            {
                ans += j;
            }
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
        cout << ob.sumOfTheSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends