// { Driver Code Starts
// Initial temolate for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// user function temolate for C++

class Solution
{
  public:
    long long int MaximumIntegerValue(string S)
    {
        // code here
        
        long long ans = 0;
        
        for (int i=0; i<S.length(); i++)
        {
            char c = S.at(i);
            string C (1,c);
            int digit = stoi(C);
            
            if (ans*digit > ans+digit) ans *= digit;
            else ans += digit;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.MaximumIntegerValue(S) << endl;
    }
    return 0;
}  // } Driver Code Ends