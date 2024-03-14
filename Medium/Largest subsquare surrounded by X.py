//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int largestSubsquare(int n, vector<vector<char>> a)
    {
        // code here
        int r[n][n];
        int c[n][n];
        
        for (int i = 0; i < n; i++) 
        {
            if (a[i][0] == 'X') r[i][0] = 1;
            else                r[i][0] = 0;
   
            for (int j = 1; j < n; j++)
            {
                if (a[i][j] == 'X') r[i][j] = r[i][j - 1] + 1;
                else r[i][j] = 0;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (a[0][j] == 'X') c[0][j] = 1;
            else                c[0][j] = 0;

            for (int i = 1; i < n; i++)
            {
                if (a[i][j] == 'X') c[i][j] = c[i - 1][j] + 1;
                else c[i][j] = 0;
            }
        }

        int ans = 0;
        
        for (int i = n - 1; i >= ans; i--)
        {
            for (int j = n - 1; j >= ans; j--)
            {
                int temp = min(r[i][j], c[i][j]);
                
                while (temp > ans)
                {
                    if (r[i - temp + 1][j] >= temp &&  c[i][j - temp + 1] >= temp) ans = temp;
                    else                                                           temp--;
                }
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
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
    }
}
// } Driver Code Ends
