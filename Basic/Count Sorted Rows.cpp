// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat)
    {
        // code here
        int ans = 0;
        
        for (int i=0; i<N; i++)
        {
            int last = -1;
            bool sorted = true;
            for (int j=0; j<M; j++)
            {
                int cur = Mat[i][j];
                if (last >= cur)
                {
                    sorted = false;   
                    break;
                }
                last = cur;
            }
            
            if (sorted) ans++;
             else 
             {
                sorted = true;
                last = -1;
                for (int j=M-1; j>=0; j--)
                {
                    int cur = Mat[i][j];
                    if (last >= cur)
                    {
                        sorted = false;   
                        break;
                    }
                    last = cur;
                }
                if (sorted) ans++;
             }
             
        }
        
        return ans;
    }
    
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}  // } Driver Code Ends