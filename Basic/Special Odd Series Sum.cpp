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
        long long int ans = 0;
        for (int i=1; i<=n; i++)
        {
            int m = i;
            
            long long k = 1;
            for (int j=0; j<m; j++)
            {
                ans +=k;
                k+=2;
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