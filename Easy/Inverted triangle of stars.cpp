//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<string> invIsoTriangle(int N)
    {
        // code here
        
        int l = (N*2)-1;
        int temp = l;
        
        vector<string> ans;
        
        for (int i=N; i>0; i--)
        {
            string line = "";
            
            int spaces = (l-temp) / 2;
            for (int j=0; j<spaces; j++) line += ' ';
            for (int j=0; j<temp; j++) line += '*';
            for (int j=0; j<spaces; j++) line += ' ';
            
            ans.push_back(line);
            
            temp  -= 2;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.invIsoTriangle(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends