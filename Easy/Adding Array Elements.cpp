//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution
{
  public:
    int minOperations(int arr[], int n, int k)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> coda;
        
        for (int i=0; i<n; i++) coda.push(arr[i]);
        
        int ans = 0;
        
        while (coda.size() > 1 && coda.top() < k)
        {
            ans++;
            
            int primo = coda.top();
            coda.pop();
            int secondo = coda.top();
            coda.pop();
            
            coda.push(primo+secondo);
        }
        
        if (coda.top() < k) return -1;
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends