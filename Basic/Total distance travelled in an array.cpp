// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    long long distance(int arr[], int n)
    {
        // code here
        long long ans = 0;
        
        int mappa[n+1] = { };
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]] = i;
        }

        for (int i=1; i<n; i++)
        {
            //cout << mappa[i+1] << "-" << mappa[i] << endl;
            ans += abs(mappa[i+1] - mappa[i]);
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.distance(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


  // } Driver Code Ends