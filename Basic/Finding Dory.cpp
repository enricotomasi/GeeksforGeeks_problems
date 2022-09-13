//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution
{
  public:
    long long int nisDoryOrNot(long long int n)
    {
        // code here
        long long a = (5*n)-4;
        long long b = (5*n)+4;
        
        long long ra = sqrt(a);
        long long rb = sqrt(b);
        
        if (pow(ra,2) == a || pow(rb,2) == b) return 1;
        
        return 0;
        
        
        
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
        cout << ob.nisDoryOrNot(n) << endl;
    }
    return 0;
}

// } Driver Code Ends