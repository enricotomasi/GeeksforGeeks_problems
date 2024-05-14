//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution
{
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) 
    {
        // code here
        vector<vector<int>>dp(rows, vector<int>(columns, INT_MAX));
        dp[0][0] = 0;
        
        queue<pair<int,int>> queue;
        queue.push({0, 0});
        
        vector<pair<int,int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        while (!queue.empty())
        {
            int x = queue.front().first;
            int y = queue.front().second;
            
            queue.pop();
            
            for (int i = 0; i < 4; i++)
            {
                int xx = x + directions[i].first;
                int yy = y + directions[i].second;
                
                if (xx >= rows || yy >= columns || xx < 0 || y < 0)
                {
                    continue;
                }
                
                if (dp[xx][yy] > max(abs(heights[xx][yy] - heights[x][y]), dp[x][y]))
                {
                    dp[xx][yy] = max(abs(heights[xx][yy] - heights[x][y]), dp[x][y]);
                    queue.push({xx, yy});
                }
            }
            
        }
        
        return dp[rows-1][columns-1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends
