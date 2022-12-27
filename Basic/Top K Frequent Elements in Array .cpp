//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
  
  static bool cmp(pair<int, int> &a,  pair<int, int> &b)
  {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
  }
  
    vector<int> topK(vector<int>& nums, int k)
    {
        // Code here
        int n = nums.size();
        
        vector<int> ans;
        map<int, int> mappa;
        
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        
        for (int i=0; i<n; i++)
        {
            mappa[nums[i]]++;
        }
        
        vector<pair<int, int>> mappa2;
        
        for (auto it: mappa) mappa2.push_back(make_pair(it.first, it.second));
        
        sort(mappa2.begin(), mappa2.end(), cmp);
        reverse(mappa2.begin(), mappa2.end());
        
        for (int i=0; i<k && i<mappa2.size(); i++)
        {
            ans.push_back(mappa2[i].first);
        }
        
        //ans.push_back(-1);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends