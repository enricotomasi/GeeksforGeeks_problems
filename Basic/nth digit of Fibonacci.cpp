//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    char nthFibonacciDigit(long long int n)
    {
        // code here
        
        string succ = "11";
        
        long long last2 = 1;
        long long last1 = 1;
        
        for (long long i = 2; i<n; i++)
        {
            long long f = last2+last1;
            succ += to_string(f);
            last2 = last1;
            last1 = f;
        }
        
        return succ.at(n-1);
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacciDigit(n) << endl;
    }
    return 0;
}

// } Driver Code Ends