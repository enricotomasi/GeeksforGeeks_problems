//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    int findNth(int n)
    {
        // code here
        if (n%2 !=0) return 0;
        
        int ans = 0;
        while (n%2==0)
        {
            ans++;
            n/=2;
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
        Solution ob;
        cout << ob.findNth(n) << endl;
    }
    return 0;
}

// } Driver Code Ends