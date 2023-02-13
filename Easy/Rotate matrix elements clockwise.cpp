//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) 
    {
        // code here
        int u = 0;
        int d = 0;
        int r = N;
        int l = M;

        while (r-u > 1 && l-d > 1)
        {

            int t = 0;
            int last = Mat[u][d];

            for (int i = u; i<r; i++)
            {
                t = Mat[u][i];
                Mat[u][i] = last;
                last = t;
            }

            for (int i=d+1; i<l-1; i++)
            {
                t = Mat[i][r-1];
                Mat[i][r-1] = last;
                last = t;
            }

            for (int i=r-1; i>=u+1; i--)
            {
                t = Mat[l-1][i];
                Mat[l-1][i] = last;
                last = t;
            }

            for (int i=l-1; i>=d; i--)
            {
                t = Mat[i][u];
                Mat[i][u] = last;
                last = t;
            }

            u++;
            d++;
            r--;
            l--;
        }

        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends