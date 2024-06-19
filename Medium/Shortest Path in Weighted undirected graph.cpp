//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) 
    {
        // Code here
        vector<pair<int,int>> adj[n+1];
        
        for (int i = 0; i < m; i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }
        
        vector<int> temp (n + 1);
        vector<int> temp2 (n + 1, INT_MAX);
        temp2[1] = 0;
        
        set<pair<int,int>> s;
        s.insert({0,1});
        
        for (int i = 0; i <= n; i++)
        {
            temp[i] = i;
        }
        
        while (!s.empty())
        {
            auto pointer = *(s.begin());

            s.erase(pointer);
            
            for (auto it : adj[pointer.second])
            {
                if (pointer.first + it.second < temp2[it.first])
                {
                    if (temp2[it.first] != INT_MAX)
                    {
                        s.erase({temp2[it.first], it.first});
                    }
                    
                    temp2[it.first] = pointer.first + it.second;
                    temp[it.first] = pointer.second;
                    s.insert({temp2[it.first], it.first});
                }
            }
        }
        
        if (temp2[n] == INT_MAX)
        {
            return { -1 };
        }
        
        vector<int> ans;
        
        int temp3 = n;
        
        while (temp[temp3] != temp3)
        {
            ans.push_back(temp3);
            temp3 = temp[temp3];
        }
        
        ans.push_back(1);
        ans.push_back(temp2[n]);
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++) {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0]) {

        } else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
    }
}

// } Driver Code Ends