//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    vector<int>consecutiveSum(int n)
    { 
        // code here
        vector<int> ans;
        
        for (int i=1; i<n-3; i++)
        {
            if (i + (i+1) + (i+2) == n)
            {
                ans.push_back(i);
                ans.push_back(i+1);
                ans.push_back(i+2);
                return ans;
            }
        }
        
        ans.push_back(-1);
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
        Solution ob;
        vector<int>v = ob.consecutiveSum(n);
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends