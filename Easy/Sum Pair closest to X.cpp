//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        
        int inizio = 0;
        int fine = arr.size()-1;
        
        int diff = INT_MAX;
        
        while (fine > inizio)
        {
            int cd = abs(arr[inizio] + arr[fine] - x);
            
            if (cd < diff)
            {
                ans[0] = arr[inizio];
                ans[1] = arr[fine];
                diff = cd;
            }
            else if (arr[inizio] + arr[fine] > x) fine--;
            else                                  inizio++;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends