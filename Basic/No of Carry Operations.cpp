//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long countCarry(long long A , long long B)
    {
        // code here
        long long ans = 0;

        int resto = 0;
        while (A)
        {
            int digitA = A%10;
            int digitB = B%10;
            
            if (digitA + digitB + resto > 9)
            {
                resto = 1;
                //cout << (digitA+digitB+resto) << "****" << digitA << " " << digitB << " " << resto << endl;
                ans++;
            }
            else
            {
                resto = 0;
            }
            
            A/=10;
            B/=10;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long A,B;
        cin>>A>>B;

        Solution ob;
        cout<<ob.countCarry(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends