//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end)
    {
        // code here
        int m = 100000;
        
        queue<pair<int, int>> q;
        q.push({start, 0});
        
        vector<int> v(100000, INT_MAX);
        v[start] = 0;
        
        while (!q.empty())
        {
            int temp = q.front().first;
            int s = q.front().second;
            q.pop();
            
            for (auto it : arr)
            {
                int nums = (it * temp) % m;
                if(s + 1 < v[nums])
                {
                    v[nums] = s + 1;
                    
                    q.push({nums, s + 1});
                }
            }
            
            if(v[end] != INT_MAX)
            {
                return v[end];
            }
        }
        
        return -1;
        
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
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends
