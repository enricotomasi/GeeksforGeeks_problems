//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    vector<int> maxSubMatrixSumQueries(vector<int> mat[], int n, int m, vector<pair<int, int>> &queries, int q)
    {
        // code here
        vector<int> ans;
        
        int temp[n + 1][m + 1] = {};

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                temp[i][j] = mat[i - 1][j - 1] + temp[i - 1][j] + temp[i][j - 1] - temp[i - 1][j - 1];
            }
        }
        
        for (auto pr : queries)
        {
            int tm = 0;
            int ta = 0;
            int a = pr.first;
            int b = pr.second;
        
            for (int i = a; i <= n; i++)
            {
                for (int j = b; j <= m; j++)
                {
                    ta = temp[i][j] - temp[i][j - b] - temp[i - a][j] + temp[i - a][j - b];
                
                    tm = max(tm, ta);

                }
            }
            
            ans.push_back(tm);
        }
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m;
        vector<int> mat[n];
        for (int i = 0; i < n; i++) {
            mat[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (int i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        Solution ob;
        auto ans = ob.maxSubMatrixSumQueries(mat, n, m, queries, q);
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << "\n";
    }
    return 0;
}


// } Driver Code Ends