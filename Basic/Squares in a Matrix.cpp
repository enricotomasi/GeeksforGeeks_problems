
// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
  public:
    long long squaresInMatrix(int m, int n)
    {
        // code here
        long long ans = 0;
        long long minimo = min(n,m);
        
        for (int i=0; i<minimo;  i++)
        {
            ans += (m-i)*(n-i);
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        
        cin>>m>>n;

        Solution ob;
        cout << ob.squaresInMatrix(m,n) << endl;
    }
    return 0;
}  // } Driver Code Ends