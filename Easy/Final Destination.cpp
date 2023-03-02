//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int canReach(long long a, long long b, long long x) 
    {
        // code here
        if ( (x > (abs(a) + abs(b)) && ( (x-abs(a)+abs(b)) %2 == 0)) ) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,x;
        
        cin>>a>>b>>x;

        Solution ob;
        cout << ob.canReach(a,b,x) << endl;
    }
    return 0;
}
// } Driver Code Ends