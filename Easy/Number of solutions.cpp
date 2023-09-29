//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    long long noOfSol(long long b, long long p)
    {
        // code here
        long long ans = 0;
 
        for (long long i = 1; i < p; i++)
        {
            if ((i * i) % p == 1)
            {
                long long temp = i + p * (b / p);
                
                if (temp > b) temp -= p;
                
                ans += ((temp - i) / p + 1);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long b,p;
        
        cin>>b>>p;

        Solution ob;
        cout << ob.noOfSol(b,p) << endl;
    }
    return 0;
}
// } Driver Code Ends