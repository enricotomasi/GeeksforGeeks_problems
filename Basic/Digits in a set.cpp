// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countNumbers(int n) 
    {
        // code here
        int ans = 0;
        
        for (int i=1; i<=n; i++)
        {
            int temp = i;
            bool ok= true;
            while (temp >0)
            {
                int digit = temp %10;
                if (digit != 1 && digit != 2 && digit != 3 && digit != 4 && digit != 5)
                {
                    ok = false;
                    break;
                }
                temp /=10;
            }
            
            if (ok) ans++;
            
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countNumbers(n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends