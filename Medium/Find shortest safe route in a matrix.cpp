//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> temp(n, vector<int>(m, 1));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int rows[] = {0, 0, 1, -1};
        int cols[] = {1, -1, 0, 0};
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int r = rows[k] + i;
                        int c = cols[k] + j;
                        
                        if (r >= 0 && r < n && c >=0 && c < m)
                        {
                            temp[r][c] = 0;
                        }
                        
                    }
                }
            }
        }
        
        queue<pair<int, pair<int, int>>> queue;
        
        for (int i = 0; i < n; i++)
        {
            if (temp[i][0] == 1)
            {
                queue.push({1, {i, 0}});
            }
        }
        
        while (!queue.empty())
        {
            auto fr = queue.front();
            queue.pop();
            
            int a = fr.second.first;
            int b = fr.second.second;
            
            int d = fr.first;
            
            vis[a][b] = 1;
            
            if (b == m - 1)
            {
                return d;
            }
            
            for (int i = 0; i < 4; i++)
            {
                int r = rows[i] + a;
                int c = cols[i] + b;
                
                if (r >= 0 && r < n && c >=0 && c < m && temp[r][c] == 1 && vis[r][c] == 0)
                {
                    queue.push({d + 1, {r, c}});
                }
                
            }
            
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
