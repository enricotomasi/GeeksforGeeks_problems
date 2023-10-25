//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    int countPairs(int arr[], int n)
    {
        // code here
        int ans = 0;
        int l = 0;
        int r = 0;
        
        vector<bool> map(n, false);
        
        while (r < n)
        {
            while (r < n && !map[arr[r]])
            {
                ans += (r - l);
                map[arr[r]] = true;
                r++;
            }
            
            while (l < r && r != n && map[arr[r]])
            {
                map[arr[l]] = false;
                l++;
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairs(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends