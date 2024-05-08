//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    int countPaths(int n, vector<vector<int>>& roads) 
    {
        // code here
        vector<vector<int>> list[n];
        
        for (auto it : roads)
        {
            list[it[0]].push_back({it[1], it[2]});
            list[it[1]].push_back({it[0], it[2]});
        }
        
         vector<int> c(n, INT_MAX);
         vector<int> paths(n, 0);
         
         c[0] = 0;
         paths[0] = 1;
         
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> queue;
         
         queue.push({0, 0});
         
         while (!queue.empty())
         {
            int temp = queue.top().second;
            int temp2 = queue.top().first;
             
            queue.pop();
             
            for (auto it : list[temp])
            {
                int node = it[0];
                long long w = it[1];
                 
                if (temp2 + w < c[node])
                {
                    paths[node] = paths[temp];
                    c[node] = w + temp2;
                    queue.push({c[node], node});
                }
                else if (temp2 + w == c[node])
                {
                    paths[node] = (paths[temp] + paths[node]) % 1000000007;
                }
                
             }
         }
         
         return paths[n - 1];
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends
