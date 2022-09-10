//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int nthFibonacci(long long int n)
    {
        // code here
        if (n<=2) return 1;
        
        long long m = pow(10,9)+7;
        
        long long a = 1;
        long long b = 1;
        long long fibo = 3;
        
        for (int i=2; i<n; i++)
        {
            fibo = (a+b)%m;
            a = b;
            b = fibo;
        }
        
        return fibo %m;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends