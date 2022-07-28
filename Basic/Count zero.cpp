//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int findCountUpto(long long int d)
    {
        // code here
        long long ans = pow(10,d)-1;
        
        while (d)
        {
            ans -= pow(9,d);
            d--;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int d;
        cin >> d;
        Solution ob;
        cout<<ob.findCountUpto(d)<<endl;
    }
    return 0;
}

// } Driver Code Ends