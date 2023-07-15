//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long maximizeEulerRatio(long long N)
    {
        // code here
        bool sieve[100];
        memset(sieve , true , sizeof(sieve));
        
        for (int i=2; i*i <= 100; i++)
        
        if (sieve[i])
        {
            for (int j = i*i; j <= 100; j += i)
            {
                sieve[j] = false;
            }
        }

        long long ans = 1; 
        long long i = 2;
        
        while (ans * i <= N)
        {
            if (sieve[i]) ans *= i;
            i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.maximizeEulerRatio(N) << endl;
    }
    return 0;
}
// } Driver Code Ends