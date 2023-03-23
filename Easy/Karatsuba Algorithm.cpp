//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    long long karatsubaAlgo(string A, string B)
    {
        // code here
        unsigned long long a = bitset<64>(A).to_ullong();
        unsigned long long b = bitset<64>(B).to_ullong();
        unsigned long long ans = a * b;
        return (long long)ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string A,B;

        cin>>A>>B;

        Solution ob;
        cout << ob.karatsubaAlgo(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends