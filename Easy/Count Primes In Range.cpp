//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int countPrimes(int L, int R)
    {
        // code here
        bool primi[R+1];
        memset(primi, true, sizeof(primi));
  
        for (int i = 2; i*i <= R; i++) 
        {
            if (primi[i] == true) 
            {
                for (int j = i*i; j <= R; j += i) primi[j] = false;
            }
        }
    
        int ans = 0;
        
        if (L < 2) L = 2;
        
        for (int i=L; i<=R; i++) if (primi[i]) ans++;
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends