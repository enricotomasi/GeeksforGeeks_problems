//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int maxWater(int arr[], int n)
    {
        // code here 
        
        int l = 0;
        int r = n-1;
        
        int ans = 0;
        int maxL = 0;
        int maxR = 0;
        
        while (l <= r)
        {
            if (arr[l] <= arr[r])
            {
                if   (arr[l] >= maxL) maxL = arr[l];
                else ans += maxL - arr[l];
                
                l++;
            }
            else
            {
                if (arr[r] >= maxR) maxR = arr[r];
                else ans += maxR-arr[r]; 
                r--;
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
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxWater(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends