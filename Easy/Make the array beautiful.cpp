//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    vector<int> makeBeautiful(vector<int> arr) 
    {
        // code here
        vector<int> ans;
        
        for (auto it : arr)
        {
            if      (ans.size()==0) ans.push_back(it);
            else if ((ans[ans.size()-1] >= 0 && it < 0) || (ans[ans.size()-1] < 0 && it >= 0))
            {
                ans.pop_back();
            } 
            else ans.push_back(it);
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends