//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    int getCarries(string N , string M) 
    {
        // code here
        int nn = N.length();
        int nm = M.length();
        nn--;
        nm--;
        
        
        int l = max(nn, nm);
        int resto = 0;
        int ans = 0;
        
        
        while (l >= 0)
        {
            if (resto) ans++;
            int digit = resto;
            resto = 0;
          
            if (nn >= 0)
            {
                digit += N[nn] - '0';
                nn--;
            }
            
            if (nm >= 0)
            {
                digit += M[nm] - '0';
                nm--;
            }

            if (digit > 9)
            {
                digit = digit %10;
                resto = 1;
            }

            l--;
        }
        
        if (resto) ans++;
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.getCarries(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends