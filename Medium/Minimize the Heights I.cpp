//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int getMinDiff(int arr[], int n, int k) 
    {
        // code here
        sort(arr, arr + n);
        
        int ans = arr[n - 1] - arr[0];
        int temp1 = arr[0] + k;
        int temp2 = arr[n - 1] - k;
        
        for (int i = 0; i < n - 1; i++)
        {
            int temp3 = min(temp1, arr[i + 1] - k);
            int temp4 = max(temp2, arr[i] + k);
            
            if (temp1 < 0)
            {
                continue;
            }
            
            ans = min(ans, temp4 - temp3);
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
