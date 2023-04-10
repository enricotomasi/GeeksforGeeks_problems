//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    
    bool primo(int n)
    {
        if (n < 2) return false;
        if (n == 2) return true;
        
        if (n % 2 == 0) return false;
        
        for (int i=3; i<n; i++)
        {
            if (n % i == 0) return false;
        }
        
        return true;
    }
    
    int primeSetBits(int L, int R)
    {
        // code here
        int ans = 0;
        
        for (int i=L; i<=R; i++)
        {
            int sets = 0;
            int temp = i;
        
            while (temp)
            {
                if (temp % 2 == 1) sets++;
                temp /= 2;
            }
            
            //cout << i << "# " << sets << " primo: " << primo(sets) << endl; 
            
            if (primo(sets))
            {
                ans++;
                // cout << sets << " ";
            }
            
            //cout << i << " " << sets << endl;
        }
        
        
        
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
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends