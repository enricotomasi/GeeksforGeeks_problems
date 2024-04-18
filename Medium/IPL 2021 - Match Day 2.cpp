//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        // your code here
        vector<int> ans;
        int temp = INT_MIN;
        
        for (int i = 0; i < k; i++)
        {
            temp = max(temp, arr[i]);    
        }
        
        ans.push_back(temp);
        
        for (int i = k; i < n; i++)
        {
            int ex = arr[i - k];
            
            if (temp == ex)
            {
                temp = INT_MIN;
                for (int j = i - k + 1; j <= i; j++)
                {
                    temp = max(temp, arr[j]);
                }
            }
            else
            {
                temp = max(temp, arr[i]);
            }
            
            ans.push_back(temp);
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
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends
