//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    long long getVal(int N, int A[]) 
    {
        // code here
        long long m = 1000000007;
        long long ans = 1;
        long long hx = 1;
        
        int fx = A[0];
        
        for (int i=0; i<N; i++) 
        {
            hx = (hx * A[i]) %m;
            fx = __gcd(A[i], fx);
        }
        
        for (int i=0; i<fx; i++)
        {
            ans = (ans * hx) %m;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.getVal(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends