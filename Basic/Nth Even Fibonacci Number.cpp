// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    long long int nthEvenFibonacci(long long int N)
    {
        // code here
        int M=1000000007;
        long long int ans = 0;
        
        long long  fib1 = 1;
        long long  fib2 = 1;
        
        for (long long i=3; i<=3*N; i++)
        {
            long long  vecchio = (fib1%M + fib2%M);
            fib1 = fib2%M;
            fib2 = vecchio%M;
        }
        
        
        return fib2%M;
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
        cout << ob.nthEvenFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends