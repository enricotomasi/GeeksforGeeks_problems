//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        //Your code here
        int n = mat.size();
        map<int, vector<int>> mappa;
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                mappa[i+j].push_back(mat[i][j]);
            }
        }
        
        vector<int> v;
        
        int k=0;
        
        for (auto it : mappa)
        {
           if (k%2 == 0 && k > 0)
           {
               reverse(it.second.begin(), it.second.end());
           }
           
           for (auto it2 : it.second)
           {
               v.push_back(it2);
           }
           
           k++;
        }
        
        return v;
         
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends