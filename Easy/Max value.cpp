//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int maxVal(int a[], int n) 
    {
        vector<int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa.push_back(a[i]-i);
        }
        
        sort(mappa.begin(), mappa.end());
        
        return mappa[n-1] - mappa[0];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends