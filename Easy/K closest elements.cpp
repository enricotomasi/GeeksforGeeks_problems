//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x)
    {
        // code here
        vector<int> ans;
        vector<pair<int, int>> mappa;
        
        for (int i=0; i<n; i++)
        {
            int diff = abs(x - arr[i]);
            mappa.push_back({arr[i], diff});
            // cout << arr[i] << " " << diff << endl;
        }
        
        sort(mappa.begin(), mappa.end(), [] (auto &left, auto &right)
        {
             if (left.second == right.second) return left.first > right.first;
             return left.second < right.second;
        });
        
        int i = 0;
        while (i < k)
        {
            int elem = mappa[i].first;
            if (elem == x)
            {
                i++;
                k++;
                continue;
            }
            ans.push_back(elem);
            i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends