//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        // code here
        int ans = 0;
        
        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < m; j++)
            {
                // cout << "i: " << i << " j: " << j << endl;
                
                if (mat[i][j] == 1)
                {
                    if (ans == 0)
                    {
                        ans = 1;
                    }
                    
                    int temp = 1;
                    bool ok = true;
                    
                    while (ok)
                    {
                        for (int q = 0; q < temp; q++)
                        {
                            for (int w = 0; w < temp; w++)
                            {
                                int x = i + q;
                                int y = j + w;
                                
                                if (x >= n || y >= m || mat[x][y] != 1)
                                {
                                    ok = false;
                                    break;
                                }
                            }
                        }
                        
                        if (ok)
                        {
                            
                            ans = max(ans, temp);
                        }
                    
                        temp += 1;
                    }
                    
                }
            }
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
