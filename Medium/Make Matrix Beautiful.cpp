//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    
    /*
        Hint:
        
        Let’s assume that maxSum is the maximum sum among all rows and columns. 
        We just need to increment some cells such that the sum of any row or column becomes ‘maxSum’. 
    
    */
    
    
    int findMinOpeartion(vector<vector<int>> matrix, int n)
    {
        // code here
        vector<int> rows;
        vector<int> cols;
        
        int m = -1;
        
        for (int i = 0; i < n; i++)
        {
            int r = 0;
            for (int j = 0; j < n; j++)
            {
                r += matrix[i][j];
            }
            
            m = max(m, r);
            rows.push_back(r);
        }
        
        for (int j = 0; j < n; j++)
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                c += matrix[i][j];
            }
            m = max(m, c);
            cols.push_back(c);
        }
        
        int ans = 0;
        
        for (auto it : rows)
        {
            ans += m - it;
        }
        
        for (auto it : cols)
        {
            ans +=  m - it;
        }
        
        
        ans /= 2;
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends