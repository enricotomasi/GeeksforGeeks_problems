//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int revCoding(int n, int m)
    {
        // code here
        int correct = (n*(n+1))/2;
        return correct == m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        
        cin>>n>>m;

        Solution ob;
        cout << ob.revCoding(n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends