//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{

  public:
    int findSwapValues(int a[], int n, int b[], int m)
    {
        // Your code goes here
        int s1 = 0;
        int s2 = 0;
        
        unordered_set<int> set;
        
        for (int i = 0; i < n; i++)
        {
            s1 += a[i];
        }
        
        for (int i = 0; i < m; i++)
        {
            s2 += b[i];
            set.insert(b[i]);
        }

        int t = s2 - s1;
        
        if (t % 2 != 0)
        {
            return -1;
        }
        
        t /= 2;
        
        for (int i = 0 ; i < n ; i++)
        {
            if (set.find(a[i] + t) != set.end())
            {
                return 1;
            }
        }
        
        return -1;
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
