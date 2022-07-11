// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    vector<vector<int>> rotateMatrix(int N, int M, int K,
                                     vector<vector<int>> Mat)
    {
        // code here
        vector<vector<int>> ans;
        
        int shift = K % M;
        //cout << "Shift: " << shift << endl;
        
        for (int i=0; i<N; i++)
        {
            vector<int> riga;
            for (int j=0; j<M; j++)
            {
                int pos = j+shift;
                if (pos >= M)
                {
                    pos -= M;
                }
                //cout << i << " " << pos << " --- " << i << " " << j << endl;
                riga.push_back(Mat[i][pos]);
            }
            ans.push_back(riga);
        }
        
        return ans;        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, K, Mat);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends