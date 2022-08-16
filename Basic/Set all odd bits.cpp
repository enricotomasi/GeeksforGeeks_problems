//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    long long int setAllOddBits(long long int n)
    {
        // code here
         return (~(0xFFFFFFFF<<((int)log2(n)+1)))&(n|0x55555555);
        
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
        cout << ob.setAllOddBits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends