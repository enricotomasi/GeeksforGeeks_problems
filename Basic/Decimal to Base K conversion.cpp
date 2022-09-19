//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long changeBase(int N , int K)
    {
        // code here
        if (K==10) return N;
        
        long long ans = 0;
        int conta = 0;
        while (N)
        {
            ans += N%K * pow(10,conta);
            N/=K;
            conta++;
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.changeBase(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends