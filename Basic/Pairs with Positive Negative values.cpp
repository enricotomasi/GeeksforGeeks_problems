//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
  public:
    vector<int> PosNegPair(int a[], int n)
    {
        vector<int> ans;
        vector<int> temp;
        unordered_map<int, int> mappa;
        
        for (int i=0; i<n; i++) mappa[a[i]]++;
        
        for (int i=0; i<n; i++)
        {
            if (mappa[abs(a[i])] >= 1 && mappa[abs(a[i]) * -1] >= 1)
            {
                 temp.push_back(abs(a[i]) * -1);
                 mappa[abs(a[i])]--;
                 mappa[abs(a[i]) * -1]--;
            }
        }
        
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        
        for (int i=0; i<temp.size(); i++)
        {
            ans.push_back(temp[i]);
            ans.push_back(temp[i] * -1);
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends