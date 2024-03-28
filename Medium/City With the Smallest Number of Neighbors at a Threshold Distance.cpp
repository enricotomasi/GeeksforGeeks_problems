//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold)
    {
        // Your code here
        vector<vector<int>> v(n, vector<int>(n, INT_MAX));
        
        for (auto it : edges)
        {
            v[it[0]][it[1]] = v[it[1]][it[0]] = it[2];
            v[it[0]][it[0]] = v[it[1]][it[1]] = 0;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (v[j][i] != INT_MAX and v[i][k] != INT_MAX and v[j][k] > v[j][i] + v[i][k])
                    {
                        v[j][k] = v[j][i] + v[i][k];
                    }
                }
            }
        }
        
        int ans = -1;
        
        int nc = INT_MAX;
        
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                
                cnt += (v[i][j] <= distanceThreshold);
            }
            
            if (cnt <= nc)
            {
                nc = cnt;
                ans = i;
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends
