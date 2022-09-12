//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<string> findThePattern(int N)
    {
        // code here
        vector<string> ans;
        int cur = 'A';
        
        string prima = "";
        for (int i=0; i<N; i++)
        {
            if (cur > 'Z') cur = 'A';
            prima += (char)cur;
            cur++;
        }
        ans.push_back(prima);
        
        if (N<=1) return ans;
        
        for (int i=0; i<N-2; i++)
        {
            string aggiungi = "";
            for (int j=0; j<N; j++)
            {
                if (cur > 'Z') cur = 'A';
                
                if (j==0 || j>=N-1)
                {
                    aggiungi += (char)cur;
                    cur++;
                }
                else                aggiungi += '$';
                
             }
            ans.push_back(aggiungi);
        }
        
        string ultima = "";
        for (int i=0; i<N; i++)
        {
            if (cur > 'Z') cur = 'A';
            ultima += (char)cur;
            cur++;
        }
        ans.push_back(ultima);
        
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
        vector<string> v = ob.findThePattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends