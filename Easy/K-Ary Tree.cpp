//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    long long M = 1000000007;
    
    long long ric(int k, int m)
    {
        long long t;
        if (m == 0) return 1;
        
        t = ric(k, m/2)%M;
        
        if (m % 2 == 0) return (t*t)%M;
        else            return (k%M * t%M * t%M)%M;
    }
    
    long long karyTree(int k, int m) 
    {
        // code here
        return (ric(k, m))%M;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}
// } Driver Code Ends