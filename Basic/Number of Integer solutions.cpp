// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    long long noOfIntSols(long long N)
    {
        // code here
        
        return ((N+1)*(N+2))/2;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.noOfIntSols(N) << endl;
    }
    return 0;
}  // } Driver Code Ends