//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long int properDivisorSum(int n)
    {
        long long int ans = 0;
        
        for (int i=1; i<n; i++)
        {
            if (n%i == 0) ans += i;
        }
        
        return ans;
    }
    
    
    int isAmicable(int A , int B)
    {
        // code here
        int pdsA = properDivisorSum(A);
        int pdsB = properDivisorSum(B);
        
        if (pdsA == 0 && pdsB == 0) return false;
        
        return (pdsA == B && pdsB == A);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.isAmicable(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends